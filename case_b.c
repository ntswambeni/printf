#include "main.h"

/**
 * case_b - fxn converts unsigned int to Binary
 * @n: the unsigned int value
 * @buffer: the buffer pointer
 * @buffer_index: the buffer index pointer
 */

int case_b(unsigned int n, char *buffer, int *buffer_index)
{
	int raw[64], i, j, len;

	if (n == 0)
	{
		buffer[(*buffer_index)++] = '0';
		return (1);
	}

	i = 0;
	while (n > 0)
	{
		raw[i] = n % 2;
		n /= 2;
		i++;
	}
	len = i;

	for (j = i - 1; j >= 0; j--)
	{
		if (*buffer_index >= BUFFER_SIZE - 1)
			flush_reset_buffer(buffer, buffer_index);

		buffer[(*buffer_index)++] = raw[j] + '0';
	}
	return (len);
}
