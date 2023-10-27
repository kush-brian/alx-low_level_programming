#include <stdio.h>

/**
 * main - print arguments
 * @argc: arg count
 * @argv: arg vector
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}	
