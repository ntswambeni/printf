#include "main.h"

/**
 * _printnumbers - prints decimal numbers
 * @d: integer to print
 * @buffer: the buffer string pointer
 * @buffer_index: the buffer_index pointer
 * Return: amount of digits printed
 */
int _printnumbers(int d, char *buffer, int *buffer_index)
{
	int numberlength;

	if (d < 0)
	{
		_putchar('-');
		_printdigit(-d, buffer, buffer_index);
		numberlength = _countdigits(-d) + 1;
	}
	else
	{
		_printdigit(d, buffer, buffer_index);
		numberlength = _countdigits(d);
	}
	return (numberlength);

}

/**
 * _printdigit - prints a number digit by digit recursively
 * @num: number to print
 * @buffer: the buffer string pointer
 * @buffer_index: the buffer_index pointer
 */
void _printdigit(int num, char *buffer, int *buffer_index)
{
	int digit;
	int remainder;

	if (num > 0)
	{
		digit = num % 10;
		remainder = num / 10;
		_printdigit(remainder, buffer, buffer_index);
		if (*buffer_index >= BUFFER_SIZE - 1)
			flush_reset_buffer(buffer, buffer_index);
		buffer[(*buffer_index)++] = digit + '0';
	}
}

/**
 * _countdigits - counts the digits in a number
 * @num: number to count digits
 * Return: amount of digits in a number
 */
int _countdigits(int num)
{
	int remainder;

	if (num <= 0)
		return (0);

	remainder = num / 10;
	return (_countdigits(remainder) + 1);
}
