#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: print alphabets in upper and lower case
 *
 * Return: return 0 when successful
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
