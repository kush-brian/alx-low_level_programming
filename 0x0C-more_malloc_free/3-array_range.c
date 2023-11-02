#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: the array
 */

int *array_range(int min, int max)
{
	int *array;
	int difference;
	int i;

	if (min > max)
		return (NULL);
	/* find the number of values in btwn */
	difference = max - min;

	/* allocate memory */
	array = malloc(sizeof(int) * (difference + 1));
	/* memory fails?*/
	if (array == NULL)
		return (NULL);

	/* return the range */
	for (i = 0; i <= max; i++)
	{
		array[i] = min++;
	}

	return (array);
}
