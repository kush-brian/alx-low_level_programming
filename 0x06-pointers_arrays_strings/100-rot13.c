#include "main.h"

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

	while (*ptr)
	{
		int i = 0;
		int found = 0;

		while (alpha[i])
		{
			if (*ptr == alpha[i])
			{
				*ptr = rot13[i];
				found = i;
				break;
			}
			i++;
		}

		if (!found)
		{
		ptr++;
		continue;
		}

		ptr++;
	}

	return (str);
}
