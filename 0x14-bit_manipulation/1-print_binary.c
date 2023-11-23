#include "main.h"
/**
 * print_binary - prints binary representation of a no
 * @n: the integer
 */
void print_binary(unsigned long int n)
{
	/* recursively call the function for the higher order bits*/
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
