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
	unsigned resultlength;
	unsigned k;

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

	resultlength = i + (n < j ? n : j);
	/* allocate memory */
	memory = malloc(sizeof(char) * (resultlength + 1));
	/* if memory alloc fails */
	if (memory == NULL)
		return (NULL);
	/* copy the s1 */
	for (k = 0; k < i; k++)
	{
		memory[k] = s1[k];
	}
	/* concatenate the first n chars of s2*/
	for (k = 0; k < n && k < j; k++)
	{
		memory[i + k] = s2[k];
	}
	memory[resultlength] = '\0';

	return (memory);
}
