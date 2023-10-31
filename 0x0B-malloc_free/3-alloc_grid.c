#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - pointer to a 2D array
 * @width: one subscript
 * @height: 2nd subscript
 * Return: the pointer
 */

int **alloc_grid(int width, int height)
{
	int **array2d;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* allocate the memory for the row*/
	array2d = (int **)malloc(sizeof(int *) * height);

	if (array2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* allocate memory for each row(array of ints) */
		array2d[i] = (int *)malloc(sizeof(int) * width);
		if (array2d[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array2d[j]);
			}
			free(array2d);
			return (NULL);
		}
		/* initialize each element to 0 */
		for (j = 0; j < width; j++)
		{
			array2d[i][j] = 0;
		}
	}
	return (array2d);
}
