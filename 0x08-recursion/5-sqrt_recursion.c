#include "main.h"
/**
 * _sqrt_recursion - finds natural square root
 * @n: the integer
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		/* if n is negative theres no natural sqrt */
		return (-1);
	}
	else if (n < 2)
	{
		/* the sqrt of 0 is 0, and 1 is 1*/
		return (n);
	}
	else
	{
		/* recursively search for the square root */
		/* use integer division */
		int root = _sqrt_recursion(n / 4) * 2;

		/* check if the result is an overestimate an adjust*/
		if ((root + 1) * (root + 1) > n)
		{
			return (root);
		}
		else
		{
			return (root + 1);
		}
	}
}
