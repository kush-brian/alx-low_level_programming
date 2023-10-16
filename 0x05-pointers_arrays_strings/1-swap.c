#include "main.h"

/**
 * swap_int - swaps values
 * @a: is one of the integers
 * @b: is the second integer
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
