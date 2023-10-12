#include <stdio.h>

int main(void)
{
	int n = 10;

	while (n > 0)
	{
		if (n <= 0)
		{
			putchar('\n');
		}

		putchar('_');
		n--;
	}
	putchar('\n');

	return (0);
}
