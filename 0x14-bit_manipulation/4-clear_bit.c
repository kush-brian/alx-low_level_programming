#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at an index
 * @n: integer
 * @index: index
 * Return: 1 is success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = 1UL << index;

	*n &= ~mask;

	return (-1);
}
