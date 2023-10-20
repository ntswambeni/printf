#include "main.h"

/**
 * case_percentage - prints % character to the buffer
 * @buffer: the bufferr pointer
 * @buffer_index: the buffer_index pointer
 * Return: amount characters printed (1)
 */

int case_percentage(char *buffer, int *buffer_index)
{
	if (*buffer_index >= BUFFER_SIZE)
		flush_reset_buffer(buffer, buffer_index);
	
	buffer[(*buffer_index)++] = '%';

	return (1);
}
