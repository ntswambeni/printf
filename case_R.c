#include "main.h"

/**
 * case_R - prints the rot13ced character
 * @s: the given string
 * @buffer: the string buffer pointer
 * @buffer_index: the buffer index pointer
 * Return: length of string printed
 */

int case_R(char *s, char *buffer, int *buffer_index)
{
	int i, j, len;
	char str1[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int check;

	if (s == NULL)
		return (-1);

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; j < 52; j++)
		{
			if (s[i] == str1[j])
			{
				if (*buffer_index >= BUFFER_SIZE)
					flush_reset_buffer(buffer, buffer_index);
				buffer[(*buffer_index)++] = str2[j];
				len++;
				check = 1; /* to indicate xter found*/
				continue;
			}
		}

		if (!check)/*prints non alphabet xters*/
		{
			if (*buffer_index >= BUFFER_SIZE)
				flush_reset_buffer(buffer, buffer_index);
			buffer[(*buffer_index)++] = s[i];
			len++;
		}

	}
	return (len);
}
