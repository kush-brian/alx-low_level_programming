#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 * Return: a pointer to the ecoded string
 */

char *rot13(char *str)
{
	char *ptr = str;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str)
	{
		char *pos = strchr(alpha, *str);

		if (pos)
		{
			*str = rot13[pos - alpha];
		}
		str++;
	}

	return (ptr);
}
