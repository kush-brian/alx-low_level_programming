#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the 2nd string
 * Return: null or memory
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *memory;

	/* if no string is added */

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	/* calculate the length of both strings for optimal memory allocation */
	while(s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	/* allocate the memory */

	memory = (char *)malloc(sizeof(char) * (i + j + 1));
	/* if the memory allocation fails */
	if (memory == NULL)
		return (NULL);

	/* concanate the strings */
	for (i = 0; s1[i] != '\0'; i++)
	{
		memory[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		memory[i + j] = s2[j];
	}

	memory[i + j] = '\0';

	return (memory);
	free(memory);
}
