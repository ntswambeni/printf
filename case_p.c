#include "main.h"

/**
 * case_p - this prints the address to a variable
 * @ptr: pointer to the variable
 * @buffer: the pointer to variable string
 * @buffer_index: the pointer to buffer index
 * Return: the number of characters printed
 */

int case_p(void *ptr, char *buffer, int *buffer_index)
{
	int i = 0;
	int len = 0;
	char hex[64];
	unsigned long addr = (unsigned long)ptr;

	while (addr > 0)
	{
		hex[i++] = "0123456789abcdef"[addr % 16];
		addr /= 16;
	}

	while (i > 0)
	{
		buffer[(*buffer_index)++] = hex[--i];
		len++;
	}

	return (len);
}
