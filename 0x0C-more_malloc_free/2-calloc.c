#include <stdlib.h>
#include "main.h"

/**
 * _calloc - create array
 * @nmemb: array elements
 * @size: size of array
 * Return: the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/* create array */
	array = malloc(sizeof(unsigned int) * size);
	/* if memory fails */
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = nmemb;
	}

	return (array);
}
