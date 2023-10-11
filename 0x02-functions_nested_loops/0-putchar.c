#include <stdio.h>
#include "main.h"

/**
 * main - the entry point of the program
 *
 * Return: returns 0 when successful
 */

int main(void)
{
	const char *str = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
