#include "main.h"
#include <stddef.h>

/**
 * _puts - prints a string
 * @s: the given string
 * @buffer: the buffer string pointer
 * @buffer_index: the buffer_index pointer
 */

void _puts(char *s, char *buffer, int *buffer_index)
{

	int i;
	
	if (s == NULL)
		return;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*buffer_index >= BUFFER_SIZE - 1)
			flush_reset_buffer(buffer, buffer_index);

		buffer[buffer_index++] = s[i];
		/*_putchar(s[i]);*/
	}
}
