#include "main.h"
/**
 * print_array - print elements of an array
 * @a: one of the integers
 * @n: the second
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(",");
	}

	printf("\n");
}
