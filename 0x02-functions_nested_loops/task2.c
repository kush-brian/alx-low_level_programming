#include <stdio.h>

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while(letter <= 'z')
	{
		while (i < 10)
		{
			putchar(letter);
			letter++;
		}
	}

	putchar('\n');

}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
