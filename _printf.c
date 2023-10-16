#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a formated string
 * @format: a string to format and print
 * Return: length of printed string
 */
int _printf(const char *format, ...)
{
	va_list list;
	int counter = 0;

	va_start(list, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			counter += _putchar(*format);
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				counter += _putchar((char)va_arg(list, int));
			}
			else if (*format == 's')
			{
				counter += _puts(va_arg(list, char *));
			}
			else if (*format == '%')
			{
				counter += _putchar('%');
			}
		}
		format++;
	}
	va_end(list);
	return (counter);
}
