#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory
 * @grid: the 2d array
 * @height: the rows
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
