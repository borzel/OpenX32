#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/spi/spidev.h>
#include <gpiod.h>

// SPI configuration for i.MX25
#define SPI_DEVICE "/dev/spidev2.0"
#define SPI_SPEED_HZ 10000000 // 10 MHz (Spartan 3A should be able up to 50 MHz)

// GPIO configuration for i.MX25
// nPROG_B is on GPIO 1:30
// nCS0 is on GPIO 1:31
// nCS1 is on GPIO 1:6
// DONE is on GPIO 1:2
// nINIT_B is on GPIO 2:29
#define GPIO_CHIP_FOR_PROG_B "gpiochip0"
#define PROG_B_GPIO_OFFSET 30
#define GPIO_CHIP_FOR_DONE "gpiochip0"
#define DONE_GPIO_OFFSET 2
//#define GPIO_CHIP_FOR_INIT_B "gpiochip1" <- is output from FPGA and is on UART3 (GPIO 2_29)
//#define INIT_B_GPIO_OFFSET 29 <- is output from FPGA and is on UART3 (GPIO 2_29)

// ----------------------------------------------

// configures a Xilinx Spartan 3A via SPI
// accepts path to bitstream-file
// returns 0 if sucecssul, -1 on errors
int configure_spartan3a_spi(const char *bitstream_path) {
    int spi_fd = -1;
    FILE *bitstream_file = NULL;
    struct spi_ioc_transfer tr = {0};
    uint8_t tx_buffer[4096];
    uint8_t rx_buffer[sizeof(tx_buffer)]; // not used here, but necessary
    int ret = 0;

    // libgpiod variables
    struct gpiod_chip *prog_b_chip = NULL;
    struct gpiod_line *prog_b_line = NULL;
    struct gpiod_chip *done_chip = NULL;
    struct gpiod_line *done_line = NULL;
    //struct gpiod_chip *init_b_chip = NULL;
    //struct gpiod_line *init_b_line = NULL;

    fprintf(stdout, "Configuring Xilinx Spartan-3A...\n");

    prog_b_chip = gpiod_chip_open_by_name(GPIO_CHIP_FOR_PROG_B);
    if (!prog_b_chip) {
        perror("Error: Could not open PROG_B GPIO-chip");
        return -1;
    }
    prog_b_line = gpiod_chip_get_line(prog_b_chip, PROG_B_GPIO_OFFSET);
    if (!prog_b_line) {
        perror("Error: Could not open PROG_B GPIO-line");
        gpiod_chip_close(prog_b_chip);
        return -1;
    }

    done_chip = gpiod_chip_open_by_name(GPIO_CHIP_FOR_DONE);
    if (!done_chip) {
        perror("Error: Could not open DONE GPIO-chip");
        gpiod_line_release(prog_b_line);
        gpiod_chip_close(prog_b_chip);
        return -1;
    }
    done_line = gpiod_chip_get_line(done_chip, DONE_GPIO_OFFSET);
    if (!done_line) {
        perror("Error: Could not open DONE GPIO-line");
        gpiod_line_release(prog_b_line);
        gpiod_chip_close(prog_b_chip);
        gpiod_chip_close(done_chip);
        return -1;
    }

/*
    init_b_chip = gpiod_chip_open_by_name(GPIO_CHIP_FOR_INIT_B);
    if (!init_b_chip) {
        perror("Error: Could not open DONE GPIO-chip");
        gpiod_line_release(prog_b_line);
        gpiod_chip_close(prog_b_chip);
        return -1;
    }
    init_b_line = gpiod_chip_get_line(init_b_chip, INIT_B_GPIO_OFFSET);
    if (!init_b_line) {
        perror("Error: Could not open DONE GPIO-line");
        gpiod_line_release(prog_b_line);
        gpiod_chip_close(prog_b_chip);
        gpiod_chip_close(done_chip);
        return -1;
    }
*/

    if (gpiod_line_request_output(prog_b_line, "spartan3a_prog_b", 1) < 0) {
        perror("Error: Cannot configure PROG_B as output");
        ret = -1; goto cleanup_gpio;
    }
    if (gpiod_line_request_input(done_line, "spartan3a_done") < 0) {
        perror("Error: Cannot configure DONE as input");
        ret = -1; goto cleanup_gpio;
    }
/*
    if (gpiod_line_request_input(init_b_line, "spartan3a_init_b") < 0) {
        perror("Error: Cannot configure INIT_B as input");
        ret = -1; goto cleanup_gpio;
    }
*/

    spi_fd = open(SPI_DEVICE, O_RDWR);
    if (spi_fd < 0) {
        perror("Error: Could not open SPI-device");
        ret = -1; goto cleanup_gpio;
    }

    // SPI-Modus (0 = CPOL=0, CPHA=0; Xilinx FPGAs oft Modus 0 oder 2)
    uint8_t mode = SPI_MODE_0; // Xilinx Spartan-3A im Slave-Modus oft Modus 0.
    ret = ioctl(spi_fd, SPI_IOC_WR_MODE, &mode);
    uint8_t bits_per_word = 8;
    ret = ioctl(spi_fd, SPI_IOC_WR_BITS_PER_WORD, &bits_per_word);
    uint32_t speed = SPI_SPEED_HZ;
    ret = ioctl(spi_fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);

    fprintf(stdout, "SPI-Bus '%s' initialized. (Mode %d, Speed %d Hz).\n", SPI_DEVICE, mode, speed);

    // read bitstream-file and send data to FPGA
    bitstream_file = fopen(bitstream_path, "rb");
    if (!bitstream_file) {
        perror("Error: Could not open bitstream-file");
        ret = -1; goto cleanup;
    }

    fprintf(stdout, "Send bitstream '%s' to FPGA...\n", bitstream_path);
    size_t bytes_read;
    tr.tx_buf = (unsigned long)tx_buffer;
    tr.rx_buf = (unsigned long)rx_buffer;
    tr.bits_per_word = bits_per_word;
    tr.speed_hz = speed;

    fprintf(stdout, "Set PROG_B to HIGH and wait 5s...\n");
    gpiod_line_set_value(prog_b_line, 1);
    usleep(5 * 1000 * 1000); // wait 5 seconds

    fprintf(stdout, "Setting PROG_B HIGH -> LOW -> HIGH and start upload...\n");
    gpiod_line_set_value(prog_b_line, 0);
    usleep(5); // wait at least 100ns (here 5us) as said in Xilinx UG
    gpiod_line_set_value(prog_b_line, 1);
    usleep(15); // wait at least 200ns (here 5us) as said in Xilinx UG

    while ((bytes_read = fread(tx_buffer, 1, sizeof(tx_buffer), bitstream_file)) > 0) {
        tr.len = bytes_read;
        ret = ioctl(spi_fd, SPI_IOC_MESSAGE(1), &tr);
        if (ret < 0) {
            perror("Error: SPI-transmission failed");
            goto cleanup;
        }
    }

/*
    // check INIT_B-pin
    usleep(100000); // 100ms warten

    int init_b_value = gpiod_line_get_value(init_b_line);
    if (init_b_value < 0) {
        perror("Error: Could not read INIT_B-Pin");
        ret = -1; goto cleanup;
    }

    if (init_b_value == 1) {
        fprintf(stdout, "Success! FPGA configured successfully! INIT_B-Pin is HIGH.\n");
        ret = 0;
    } else {
        fprintf(stderr, "Error: FPGA configuration failed! INIT_B-Pin is still LOW.\n");
        ret = -1;
    }
*/

    fprintf(stdout, "Bitstream transmitted. Now writing additional dummy-data to finalize configuration...\n");

    // write additional dummy-data (ones = 0xFF = 0b11111111) to finalize configuration
    tr.len = 8; // eight additional bytes
    for (uint16_t i=0; i<100; i++) {
        tx_buffer[i] = 0xFF;
        rx_buffer[i] = 0;
    }
    ioctl(spi_fd, SPI_IOC_MESSAGE(1), &tr);

    fprintf(stdout, "Waiting for DONE-Signal...\n");

    // check DONE-pin
    usleep(100 * 1000); // 100ms warten

    int done_value = gpiod_line_get_value(done_line);
    if (done_value < 0) {
        perror("Error: Could not read DONE-Pin");
        ret = -1; goto cleanup;
    }

    if (done_value == 1) {
        fprintf(stdout, "Success! FPGA configured successfully! DONE-Pin is HIGH.\n");
        ret = 0;
    } else {
        fprintf(stderr, "Error: FPGA configuration failed! DONE-Pin is still LOW.\n");
        ret = -1;
    }

cleanup:
    if (bitstream_file) fclose(bitstream_file);
    if (spi_fd >= 0) close(spi_fd);

cleanup_gpio:
    if (prog_b_line) gpiod_line_release(prog_b_line);
    if (done_line) gpiod_line_release(done_line);
    if (prog_b_chip) gpiod_chip_close(prog_b_chip);
    if (done_chip) gpiod_chip_close(done_chip);

    return ret;
}


int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <bitstream.bit>\n", argv[0]);
        return 1;
    }

    return configure_spartan3a_spi(argv[1]);
}
