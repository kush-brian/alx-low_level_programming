#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: string
 * @accept: the prefix
 * Return: accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s != '\0')
	{
		found = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}
		if (found == 0)
		{
			return (count);
		}

		s++;
		accept = accept - count;

	}
	return (count);
}
