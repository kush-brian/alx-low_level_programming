#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at an index
 * @n: integer
 * @index: the index
 * Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/**
	 * check if the index is within valid bound
	 * and if the pointer is not NULL
	 */
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = 1UL << index;

	/* set the bit at the specified index to 1 */
	*n |= mask;

	return (1);
}
