#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - Returns sum of a, b
 * @a: first integer
 * @b: 2nd integer
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns a-b
 * @a: first integer
 * @b: 2nd integer
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns a * b
 * @a: integer
 * @b: integer
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns a/b
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder
 * @a: integer
 * @b: integer
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
