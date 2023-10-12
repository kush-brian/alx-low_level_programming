#include "main.h"
/**
 * print_triangle - makes a triangle
 * @size: helps with the dimensions
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, spaces;

		for (i = 1; i <= size; i++)
		{
			spaces = size - i;
			for (j = 1; j <= spaces; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
