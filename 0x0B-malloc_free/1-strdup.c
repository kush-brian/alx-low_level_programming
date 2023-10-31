#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string in memory
 * @str: the string to copy
 * Return: null or the pointer to memory
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	/* calculate the length of the input string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* allocate the memory for the new string */

	s = (char *)malloc(sizeof(char) * (length + 1));
	/* when memory allocation fails */

	if (s == NULL)
	{
		return (NULL);
	}
	/* copy the original string into the new memory */

	for (i = 0; i <= length; i++)
	{
		s[i] = str[i];
	}

	return (s);
	free(s);
}
