#include <stdio.h>

/**
 * main - the entry point
 *
 * Description: base16 numbers
 *
 * Return: returns 0 when successful
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
