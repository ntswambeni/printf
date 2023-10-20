#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - prints a formated string
 * @format: a string to format and print
 * Return: length of printed string
 */
int _printf(const char *format, ...)
{
	va_list list;
	char buffer[BUFFER_SIZE];
	int counter = 0, buffer_index = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(list, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			buffer[buffer_index++] = *format;
			counter++;
		}
		else
		{
			format++;
			if (*format == 'c')
				counter += case_c((char)va_arg(list, int), buffer, &buffer_index);
			else if (*format == 's')
				counter += case_s(va_arg(list, char *), buffer, &buffer_index);
			else if (*format == '%')
				counter += case_percentage(buffer, &buffer_index);
			else if (*format == 'd' || *format == 'i')
				counter += _printnumbers(va_arg(list, int), buffer, &buffer_index);
			else if (*format == 'b')
				counter += case_b(va_arg(list, unsigned int), buffer, &buffer_index);
			else if (*format == 'p')
                                counter += case_s(va_arg(list, void *), buffer, &buffer_index);
			else if (*format == 'r')
                                counter += case_r(va_arg(list, char *), buffer, &buffer_index);
			else if (*format == 'R')
				counter += case_R(va_arg(list, char *), buffer, &buffer_index);
			else if (*format == '\n')
			{
				buffer[buffer_index++] = '%';
				buffer[buffer_index++] = '\n';
				counter += 2;
			}
			else if (*format == ' ')
			{
				for (i = 1; format[i] != '\0'; i++)
				{
					if (format[i] != ' ')
					{
						buffer[buffer_index++] = '%';
						buffer[buffer_index++] = ' ';
						format += i - 1;
						counter += 2;
						break;
					}
				}
				if (format[i] == '\0')
				{
					flush_reset_buffer(buffer, &buffer_index);
					return (-1);
				}
			}
			else
			{
				if (*format == '\0')
				{
					flush_reset_buffer(buffer, &buffer_index);
					return (-1);
				}
				for (i = 1; format[i] != '\0'; i++)
				{
					if (format[i] != ' ')
					{
						buffer[buffer_index++] = '%';
						format += i - 1;
						counter++;
						break;
					}
				}
				if (format[i] == '\0')
				{
					flush_reset_buffer(buffer, &buffer_index);
					return (-1);
				}
			}
		}
		format++;
	}
	if (buffer_index > 0)
	{
		flush_reset_buffer(buffer, &buffer_index);
	}
	va_end(list);
	return (counter);
}
