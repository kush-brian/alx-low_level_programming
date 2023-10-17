#include "main.h"

/**
 * puts2 - print string
 * @str: the string to be printed
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			_putchar(str[i]);
			i = i + 2;
	}

	_putchar('\n');
}
