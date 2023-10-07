#include <stdio.h>

/**
 * main - exutable function
 *
 * Description: print the alphabets
 *
 * Return: returns 0 if success
 */

int main(void)
{
	char letter;

	/* print the alphabets in order */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
