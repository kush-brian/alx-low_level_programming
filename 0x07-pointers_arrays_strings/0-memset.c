#include "main.h"

/**
 * _memset - loops through memory
 * @s: the pointer
 * @b: the constant
 * @n: the iterations
 * Return: the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
