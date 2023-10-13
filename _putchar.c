#include <unistd.h>

/**
 * _putchar - prints a character received in args
 * and returns amount of characters printed
 * @c: character to print
 * Return: amount of characters printed
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
