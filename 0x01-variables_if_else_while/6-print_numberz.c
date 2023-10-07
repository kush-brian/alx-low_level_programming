#include <stdio.h>

/**
 * main - te entry point
 *
 * Description: print numberz
 *
 * Return: returns 0 when successful
 */

int main(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
