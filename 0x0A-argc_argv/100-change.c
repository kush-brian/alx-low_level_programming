#include <stdio.h>
#include <stdlib.h>
/**
 * main - change cents
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int coin_cnt = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[i]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_cnt++;
		}
	}

	printf("%d\n", coin_cnt);
	return (0);
}
