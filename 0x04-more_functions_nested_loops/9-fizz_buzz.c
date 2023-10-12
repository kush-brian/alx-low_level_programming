#include <stdio.h>
/**
 * main - does the fizz buzz test
 * Return: returns 0 when true
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		/* print a space after each number or word except for the last one*/

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
