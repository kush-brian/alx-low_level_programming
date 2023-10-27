#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int sum = 0;
	int num = 0;
	int j = 0;
	int i = 0;
	int sign = 1;
	char *arg = argv[i];

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (arg[j] == '-')
		{
			sign = -1;
			j++;
		}

		/* convert the argument to an integer */

		while (arg[j] != '\0')
		{
			if (arg[j] < '0')
			{
				printf("Error\n");
				return (1);
			}

			num = num * 10 + (arg[j] - '0');
			j++;
		}
		/* check the numbers if positive */

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += sign * num;
	}

	printf("%d\n", sum);
	return (0);
}
