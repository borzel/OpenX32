#ifndef UART_H_
#define UART_H_

#include "x32ui.h"

// Maximal mögliche Paketlänge inklusive Startbyte, Endbyte und Checksumme
// Langes Paket: 0xFE (1) + BoardID (1) + ID (1) + Value_MSB (1) + Value_LSB (1) + 0xFE (1) + CHECKSUM (1) = 7 Bytes
#define MAX_BUFFER_SIZE 32 // Etwas größer als die maximale Paketlänge, um Überläufe zu handhaben

// uart
int fd;
struct termios tty;
char buffer_uart[256]; // Puffer für UART-Lesevorgänge
ssize_t bytes_read;
int bytes_available;
uint8_t receivedBoardId;

int uartTxData(const unsigned char *data_buffer, int num_bytes);
int uartOpen();
int uartRead();

#endif