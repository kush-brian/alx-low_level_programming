#include <stdio.h>

/**
 * main - prints name of exe
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
