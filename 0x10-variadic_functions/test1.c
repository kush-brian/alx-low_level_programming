#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: separates numbers
 * @n: the number count
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
        va_list list;
        unsigned int i, j;
        va_start(list, n);

        /* iterate through the parameters*/
	while (va_arg(list, unsigned int))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < n; j = va_arg(list, int))
			{
				if (separator == NULL)
					return;
				printf("%c ", separator[j]);
			}
			printf("%d ", i);
		}
	}
		putchar ('\n');
		va_end(list);
}
