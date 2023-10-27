#include <stdio.h>

/**
 * main - returns arg count
 * @argc: the count
 * @argv: the vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
