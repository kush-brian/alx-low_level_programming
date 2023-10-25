#include "main.h"

/**
 * factorial - calculates the factorial
 * @n: the integer
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n <= 1)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
}
