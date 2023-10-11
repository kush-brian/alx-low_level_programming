#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check for lowercase character
 *
 * @c: character to test
 * Return: 1 when True else 0
 */

int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
