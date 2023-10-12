#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: Number to find the last digit
 *
 * Return: last digit as int value
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
