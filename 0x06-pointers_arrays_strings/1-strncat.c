#include "main.h"
/**
 * _strncat - copy a string with a specified maximum length
 * @dest: Destination string
 * @src: source string
 * @n: maximum no of characters to copy
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}
