#include "main.h"
#include <stdlib.h>

/**
* _puts - prints a string
* @s: the given string
* Return: length of string
*/

int _puts(char *s)
{

	int i;

	if (s == NULL)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
