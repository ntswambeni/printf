#include "main.h"
#include <stddef.h>

/**
 * case_s - prints a string
 * @s: the given string
 * @buffer: the buffer string pointer
 * @buffer_index: the buffer_index pointer
 * Return: amount of characters sent to the buffer
 */

int case_s(char *s, char *buffer, int *buffer_index)
{

	int i;

	if (s == NULL)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*buffer_index >= BUFFER_SIZE - 1)
			flush_reset_buffer(buffer, buffer_index);

		buffer[(*buffer_index)++] = s[i];
	}
	return (i);
}
