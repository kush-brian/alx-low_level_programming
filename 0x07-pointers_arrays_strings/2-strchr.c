#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the pointer
 * @c: the character to be located
 * Return: returns pointer of Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (NULL);
}
