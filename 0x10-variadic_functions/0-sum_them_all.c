#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all parameters
 * @n: initial integer
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	/* create a list of parameters */
	va_list list;
	/* initiate the list */
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(list, unsigned int);
		/* va_arg gets the next argument value */
	}
	va_end(list);
	return (sum);
}
