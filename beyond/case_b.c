#include "main.h"

/**
 * toBinary - fxn converts unsigned int to Binary
 * @n: the unsigned int value
 * Return: value for count; number of digts printed
 */

int toBinary(unsigned int n)
{
	int count;

	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n == 1)
	{
		_putchar('1');
		return (1);
	}
		count = toBinary(n/2); /*computes next value*/
		_putchar(n % 2 + '0'); /*prints remainder*/
		return (count + 1); /* 1 for current call */
}
