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
	difference = max - min + 1;

	/* allocate memory */
	array = malloc(sizeof(int) * difference);
	/* memory fails?*/
	if (array == NULL)
		return (NULL);

	/* return the range */
	for (i = 0; i < difference; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
