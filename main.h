#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c, char *buffer, int *buffer_index);
int case_c(char c, char *buffer, int *buffer_index);
int case_s(char *s, char *buffer, int *buffer_index);
int case_b(unsigned int n, char *buffer, int *buffer_index);
void flush_reset_buffer(char *buffer, int *buffer_index);

#endif
