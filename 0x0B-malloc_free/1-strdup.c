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

	s = (char *)malloc(sizeof(char) * 10);
	for (i = 0; i < 10; i++)
	{
		if (i > 10)
		{
			return (NULL);
		}
		s[i] = str[i];
	}

	return (s);
	free(s);
}
