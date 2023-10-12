#include "main.h"
/**
 * print_sign - prints the sign of a no
 *
 * @n: The number to check
 *
 * Return: 1 if greater than 0, 0 if n is zero, -1 if n is less zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
