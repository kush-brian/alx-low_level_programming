#include <stdio.h>

/**
 * main - entry point
 *
 * Description: reverse alphabet
 *
 * Return: returns 0 when successful
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
