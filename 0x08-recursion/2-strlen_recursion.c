#include "main.h"
/**
 * _strlen_recursion - prints length of string
 * @s: the string
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	/* base case the length of empty string is 0 */
	if (*s == '\0')
	{
		return (0);
	}
	/* recursive case: call the fuction with the nxt charcater */
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
