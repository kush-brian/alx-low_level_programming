#include "main.h"
/**
 * _strncpy - copy a string with a specified maximum length
 * @dest: Destination string
 * @src: source string
 * @n: maximum no of characters to copy
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
