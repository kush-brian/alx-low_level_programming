#include "main.h"

/**
 * _strcat - concanates two strings
 * @dest: the destination
 * @src: the source file
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	/* find the length of the destination string */

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* find the length of the source string */

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	/* copy the source string to the end of the destination string */
	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* add a null terminator*/

	dest[dest_len + src_len] = '\0';

	return (dest);
}
