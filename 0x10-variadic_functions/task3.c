#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @args: va_list for variable arguments
 */
void print_char(va_list args)
{
    printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer
 * @args: va_list for variable arguments
 */
void print_int(va_list args)
{
    printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 * @args: va_list for variable arguments
 */
void print_float(va_list args)
{
    printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string
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
 * print_all - Prints anything
 * @format: Format string specifying the types of arguments
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0, j = 0;
    char *separator = "";

    va_start(args, format);

    typedef struct {
        char specifier;
        void (*printer)(va_list);
    } format_specifier;

    format_specifier specifiers[] = {
        {'c', print_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_string},
        {'\0', NULL}  // End marker
    };

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

