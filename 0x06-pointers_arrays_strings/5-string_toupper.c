#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase in a string
 * @str: the string to be modified
 * Return: a pointer to the modified string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}

	return (str);
}
