#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);
int case_c(char c, char *buffer, int *buffer_index);
int case_s(char *s, char *buffer, int *buffer_index);
int case_b(unsigned int n, char *buffer, int *buffer_index);
void flush_reset_buffer(char *buffer, int *buffer_index);
int _countdigits(unsigned int num);
int _printnumbers(int d, char *buffer, int *buffer_index);
void _printdigit(unsigned int num, char *buffer, int *buffer_index);
int case_R(char *s, char *buffer, int *buffer_index);
int case_p(void *ptr, char *buffer, int *buffer_index);
int case_r(char *s, char *buffer, int *buffer_index);
int case_percentage(char *buffer, int *buffer_index);

#endif
