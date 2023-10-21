#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	char *str = "long string";

	len = _printf("Let's print a simple sentence.\n");
	len2 = printf("Let's print a simple sentence.\n");
	printf("%d - %d\n", len, len2);

	len = _printf("%c", 'S');
        len2 = printf("%c", 'S');
        printf("%d - %d\n", len, len2);

	len = _printf("Let's print a simple char: [%c]. did it work?\n", 'F');
        len2 = printf("Let's print a simple char: [%c]. did it work?\n", 'F');
        printf("%d - %d\n", len, len2);

	len = _printf("Let's cast a char: [%c]. did it work?\n", 48);
        len2 = printf("Let's cast a char: [%c]. did it work?\n", 48);
        printf("%d - %d\n", len, len2);

	len = _printf("%s", "This sentence is retrieved from va_args!\n");
        len2 = printf("%s", "This sentence is retrieved from va_args!\n");
        printf("%d - %d\n", len, len2);

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
        len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
        printf("%d - %d\n", len, len2);

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
        len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
        printf("%d - %d\n", len, len2);

	len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
        len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
        printf("%d - %d\n", len, len2);

	len = _printf("%%");
        len2 = printf("%%");
        printf("%d - %d\n", len, len2);

	len = _printf("Should print a single percent sign: %%\n");
        len2 = printf("Should print a single percent sign: %%\n");
        printf("%d - %d\n", len, len2);

	len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
        len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
        printf("%d - %d\n", len, len2);

	len = _printf("css%ccs%scscscs", 'T', "Test");
        len2 = printf("css%ccs%scscscs", 'T', "Test");
        printf("%d - %d\n", len, len2);

	len = _printf("man gcc:\n%s", str);
        len2 = printf("man gcc:\n%s", str);
        printf("%d - %d\n", len, len2);

	len = _printf(NULL);
        len2 = printf(NULL);
        printf("%d - %d\n", len, len2);

	len = _printf("%c", '\0');
        len2 = printf("%c", '\0');
        printf("%d - %d\n", len, len2);

	len = _printf("%");
        len2 = printf("%");
        printf("%d - %d\n", len, len2);

	len = _printf("%K\n");
        len2 = printf("%K\n");
        printf("%d - %d\n", len, len2);

	len = _printf("%!\n");
        len2 = printf("%!\n");
        printf("%d - %d\n", len, len2);

	_printf("%d\n", 1024);
	printf("%d\n", 1024);
	_printf("%d\n", -1024);
	printf("%d\n", -1024);
	_printf("%d\n", 0);
	printf("%d\n", 0);
	_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);
	_printf("%d\n", INT_MIN);	
	printf("%d\n", INT_MIN);
	_printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("There is %d bytes in %d KB\n", 1024, 1);
	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("%d - %d = %d\n", 1024, 2048, -1024);
	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("%i\n", 1024);
	printf("%i\n", 1024);
	_printf("%i\n", -1024);
	printf("%i\n", -1024);
	_printf("%i\n", 0);
	_printf("%i\n", INT_MAX);
	_printf("%i\n", INT_MIN);	
	_printf("There is %i bytes in %i KB\n", 1024, 1);
	_printf("%i - %i = %i\n", 1024, 2048, -1024);
	_printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("%d == %i\n", 1024, 1024);
	_printf("iddi%diddiiddi\n", 1024);
	_printf("%d\n", 10000);
	_printf("%i\n", 10000);

	return (0);
}
