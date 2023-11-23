#include "main.h"
/**
 * get_bit - returns value of a bit at an index
 * @n: integer
 * @index: the index
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		/* check if index is within valid bounds*/
		return (-1);
	}

	/* create a mask with a 1 at the specified index*/
	mask = 1UL << index;

	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
