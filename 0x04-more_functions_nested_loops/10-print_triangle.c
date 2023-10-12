#include "main.h"
/**
 * print_triangle - makes a triangle
 * @size: helps with the dimensions
 */

void print_triangle(int size)
{
	int size = 4;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
