#include "main.h"
/**
 * _atoi - convers a string to an integer
 * @s: pointer to the string
 * Return: the integer value of the string
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* handle leading white spaces */
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;

	/* handle signs*/
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
