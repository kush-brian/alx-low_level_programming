#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be modified
 * Return: a pointer to the modified string
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 0;

	while (*ptr)
	{
		if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr -= 32;
			capitalize_next = 0;
		}

		if (*ptr == ' ' || *ptr == '\t' ||
			*ptr == '\n'|| *ptr == ',' ||
			*ptr == ';' || *ptr == '.' ||
			*ptr == '!' || *ptr == '?' ||
			*ptr == '"' || *ptr == '(' ||
			*ptr == ')' || *ptr == '{' ||
			*ptr == '}')
		{
			capitalize_next = 1;
		}

		ptr++;
	}
	return (str);
}
