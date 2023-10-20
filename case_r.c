#include "main.h"

/**
 * case_r - prints a string in reverse
 * @s: the given string
 * @buffer: the string buffer pointer
 * @buffer_index: the buffer index pointer
 * Return: length of string printed
 */

int case_r(char *s, char *buffer, int *buffer_index)
{
	int i, len;

	if (s == NULL)
		return (-1);

	len = 0;
	for (i = 0; s[i] != '\0'; i++);
	while (i >= 0)
	{
		if (*buffer_index >= BUFFER_SIZE)
			flush_reset_buffer(buffer, buffer_index);
		buffer[(*buffer_index)++] = s[i];

		len++;
		i--;
	}
	return (len);
}
