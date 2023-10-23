#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string pointer
 * @accept: the first occurrence
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}

	return (NULL);
}
