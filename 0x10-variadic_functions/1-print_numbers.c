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
	unsigned int i;

	va_start(list, n);

	/* iterate through the parameters*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar ('\n');

	va_end(list);
}
