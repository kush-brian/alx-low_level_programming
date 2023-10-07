#include <stdio.h>

/**
 * main - the entry point
 *
 * Description: print alphebet except afew
 *
 * Return: returns  if successsful
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	putchar ('\n');

	return (0);
}
