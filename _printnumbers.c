#include "main.h"

/**
 * _printnumbers - prints decimal numbers
 * @d: integer to print
 * Return: amount of digits printed
 */
int _printnumbers(int d)
{
	int numberlength;

	if (d < 0)
	{
		_putchar('-');
		_printdigit(-d);
		numberlength = _countdigits(-d) + 1;
	}
	else
	{
		_printdigit(d);
		numberlength = _countdigits(d);
	}
	return (numberlength);

}

/**
 * _printdigit - prints a number digit by digit recursively
 * @num: number to print
 */
void _printdigit(int num)
{
	int digit;
	int remainder;

	if (num > 0)
	{
		digit = num % 10;
		remainder = num / 10;
		_printdigit(remainder);
		_putchar(digit + '0');
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
