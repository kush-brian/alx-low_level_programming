#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: separates
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	const char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, const char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("nil");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar ('\n');
	va_end(list);
}
