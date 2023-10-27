#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* convert command line arguments to integers*/

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	x = num1 * num2;

	printf("%d\n", x);

	return (0);
}
