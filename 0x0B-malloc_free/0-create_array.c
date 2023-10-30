#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: the threshold
 * @c: the initializer
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	/* allocate memory */

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	/* initialize the array */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
