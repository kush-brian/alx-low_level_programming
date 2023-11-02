#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate 2 string
 * @s1: string 1
 * @s2: string 2
 * @n: limit
 * Return: memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *memory;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	/* find the length of both strings */
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	/* allocate memory */
	memory = malloc(sizeof(char) * (i + j + 1));
	/* if memory alloc fails */
	if (memory == NULL)
		return (NULL);
	/* concatenate the strings */
	for (i = 0; s1[i] != '\0'; i++)
	{
		memory[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		memory[i + j] = s2[j];
	}
	memory[i + j] = '\0';

	return (memory);
}
