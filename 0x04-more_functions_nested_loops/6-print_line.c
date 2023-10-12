#include "main.h"
/**
 * print_line - print lines
 * @n: the number of time to print _
 */

void print_line(int n)
{
	while (n > 0)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}

		_putchar('_');
		n--;
	}
	_putchar('\n');
}
