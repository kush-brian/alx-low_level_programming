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
	void *array;
	unsigned char *byte_array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/* create array */
	array = malloc(nmemb * size);
	/* if memory fails */
	if (array == NULL)
	{
		return (NULL);
	}
	byte_array = (unsigned char *)array;
	for (i = 0; i < (nmemb * size); i++)
	{
		byte_array[i] = 0;
	}

	return (array);
}
