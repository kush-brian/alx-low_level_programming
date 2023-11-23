#include "main.h"
/**
 * flip_bits - returns no of bits you would need to flip to
 * get from one number to another
 * @n: current integer
 * @m: next integer
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* XOR to find differint bits */
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		/* check the rightmost bit and increment count if its 1*/
		count += xor_result & 1;
		/* right-shift to move to the next bit */
		xor_result >>= 1;
	}
	return (count);
}
