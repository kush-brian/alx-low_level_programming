#include "main.h"

/**
 * _memcpy - copies bytes to memory area
 * @dest: the destination
 * @src: the source
 * @n: the number of times
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;

	while (dest[i] != '\0')
	{
		i++;
	}

	/* find the length of the source */
	while (src[j] != '\0')
	{
		j++;
	}

	/* copy the source to destination */

	for (k = 0; k <= n; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}
