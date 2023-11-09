#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
typedef struct
{
	char specifier;
	void (*printer)(va_list);
} format_specifier;
/**
 * print_char - prints a character
 * @args: list of types of arguments passed
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - prints an integer
 * @args: va_list for variable arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - prints a float
 * @args: va_list for variable arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - prints a string
 * @args: va_list for variable arguments
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: format string specifying the type of arguments
 */
format_specifier specifiers[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
};

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (specifiers[j].specifier != '\0')
		{
			if (specifiers[j].specifier == format[i])
			{
				printf("%s", separator);
				specifiers[j].printer(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
