// Program to test access to GPIOs via led-control, libgpiod and direct access

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <gpiod.h>
#include <linux/gpio.h>

#define GPIO_CHIP "gpiochip0"
#define GPIO_OFFSET 26

int main(int argc, char *argv[]) {
/*
    // toggle the GPIO using led-system (tested and working)
    int fd = open("/sys/class/leds/reset_fpga/brightness", O_WRONLY);
    write(fd, "1", 1);
    usleep(5 * 1000);
    write(fd, "0", 1);
    close(fd);
*/

    // libgpiod variables
    struct gpiod_chip *gpioChip = NULL;
    struct gpiod_line *gpioLine = NULL;

    printf("Connecting to GPIO...\n");
    gpioChip = gpiod_chip_open_by_name(GPIO_CHIP);
    gpioLine = gpiod_chip_get_line(gpioChip, GPIO_OFFSET);
    gpiod_line_request_output(gpioLine, "imxgpio", 0);

    printf("ON\n");
    gpiod_line_set_value(gpioLine, 1);
    usleep(1000 * 1000); // wait 1 second
    printf("OFF\n");
    gpiod_line_set_value(gpioLine, 0);
    usleep(1000 * 1000); // wait 1 second
    printf("ON\n");
    gpiod_line_set_value(gpioLine, 1);
    usleep(1000 * 1000); // wait 1 second
    printf("OFF\n");
    gpiod_line_set_value(gpioLine, 0);
    usleep(1000 * 1000); // wait 1 second
    printf("ON\n");
    gpiod_line_set_value(gpioLine, 1);
    usleep(1000 * 1000); // wait 1 second
    printf("OFF\n");
    gpiod_line_set_value(gpioLine, 0);

//    int done_value = gpiod_line_get_value(done_line);
//    fprintf("DONE = %i\n", done_value);

    gpiod_line_release(gpioLine);
    gpiod_chip_close(gpioChip);




/*
    // toggle GPIO using direct access to gpiochip using APIv1
    int fd_chip;
    struct gpiohandle_request req;
    struct gpiohandle_data data;
    int ret;

    fd_chip = open("/dev/gpiochip0", O_RDWR);
    memset(&req, 0, sizeof(req));
    req.lineoffsets[0] = GPIO_OFFSET;
    req.lines = 1;
    req.flags = GPIOHANDLE_REQUEST_OUTPUT;
    strcpy(req.consumer_label, "gpiotest");

    ioctl(fd_chip, GPIO_GET_LINEHANDLE_IOCTL, &req);

    int fd_line = req.fd;
    printf("Successfully requested GPIO line %d with V1 API. Starting to toggle...\n", GPIO_OFFSET);

    // 3. Line-Werte toggeln
    for (int i = 0; i < 5; ++i) {
        // ON
        data.values[0] = 1;
        // Der ioctl-Befehl zum Setzen von Werten für V1
        ioctl(fd_line, GPIOHANDLE_SET_LINE_VALUES_IOCTL, &data);
        printf("ON\n");
        usleep(500 * 1000); // 0.5 Sekunden warten

        // OFF
        data.values[0] = 0;
        ioctl(fd_line, GPIOHANDLE_SET_LINE_VALUES_IOCTL, &data);
        printf("OFF\n");
        usleep(500 * 1000); // 0.5 Sekunden warten
    }

    // 4. Ressourcen freigeben
    close(fd_line);
    close(fd_chip);
*/


/*
    // toggle GPIO using direct access to gpiochip using APIv2
    int fd_chip, fd_line;
    int ret;
    struct gpio_v2_line_request req;
    struct gpio_v2_line_values val;
    fd_chip = open("/dev/gpiochip0", O_RDWR);

    memset(&req, 0, sizeof(req));
    req.num_lines = 1; // Wir fordern nur eine Line an
    req.offsets[0] = GPIO_OFFSET;
    req.config.flags = GPIO_V2_LINE_FLAG_OUTPUT;
    strcpy(req.consumer, "gpiotest");

    ioctl(fd_chip, GPIO_V2_GET_LINE_IOCTL, &req);

    fd_line = req.fd;
    printf("Successfully requested GPIO line %d. Starting to toggle...\n", GPIO_OFFSET);

    for (int i = 0; i < 5; ++i) {
        // ON
        val.mask = 1 << 0; // Bitmaske für die erste Line
        val.bits = 1 << 0; // Wert auf 1 setzen
        ioctl(fd_line, GPIO_V2_LINE_SET_VALUES_IOCTL, &val);
        printf("ON\n");
        usleep(500 * 1000); // 0.5 Sekunden warten

        // OFF
        val.mask = 1 << 0;
        val.bits = 0 << 0; // Wert auf 0 setzen
        ioctl(fd_line, GPIO_V2_LINE_SET_VALUES_IOCTL, &val);
        printf("OFF\n");
        usleep(500 * 1000); // 0.5 Sekunden warten
    }

    // 4. Ressourcen freigeben
    // Das Schließen des Line-FD gibt die Line-Ressource frei
    close(fd_line);
    close(fd_chip);
*/


    printf("DONE\n");
}
