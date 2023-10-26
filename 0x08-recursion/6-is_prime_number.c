#include "main.h"
#include <math.h>
/**
 * is_prime_number - identifies prime numbers
 * @n: the number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		for (i = 3; i * i <= n; i += 2)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
		return (1);
	}
}
