#include <stdio.h>
#include <stdlib.h>
/**
 * main - add numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int num;
	int j;
	int sign;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		num = 0;
		j = 0;
		sign = 1;

		if (arg[j] == '-')
		{
			sign = -1;
			j++;
		}
		while (arg[j] != '\0')
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}

			num = num * 10 + (arg[j] - '0');
			j++;
		}
		sum += sign * num;
	}
	printf("%d\n", sum);
	return (0);
}
