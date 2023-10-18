#include <unistd.h>

/**
 * case_c - prints a character received in args
 * and returns amount of characters printed
 * @c: character to print
 * @buffer: the string buffer pointer
 * @buffer_index: the buffer_index pointer
 * Return: 1 on success
 */

int case_c(char c, char *buffer, int *buffer_index)
{
	buffer[(*buffer_index)++] = c;
	return (1);
}
