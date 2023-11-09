#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = op(num1, num2);
	printf("%d\n", result);

	return (0);
}
