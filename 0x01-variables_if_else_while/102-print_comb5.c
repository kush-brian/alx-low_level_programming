#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Description: combinations of four numbers
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int w;
	int x;
	int y;
	int z;

	for (w = 0; w <= 9; w++)
	{
		for (x = 0; x <= 8; x++)
		{
			for (y = 0; y <= 9; y++)
			{
				for (z = 1; z <= 9; z++)
				{
					putchar('0' + w);
					putchar('0' + x);
					putchar(' ');
					putchar('0' + y);
					putchar('0' + z);

					if (w < 9 || x < 8 || y < 9 || z < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
