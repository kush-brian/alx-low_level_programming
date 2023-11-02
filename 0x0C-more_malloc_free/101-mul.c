#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - multiplies 2 numbers
 * @argc: argc count
 * @argv: arg vector
 * Return: the multiplication
 */
int main(int argc, char *argv[])
{
	int x;
	int num1;
	int num2;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	x = num1 * num2;

	printf("%d\n", x);

	return (0);
}
