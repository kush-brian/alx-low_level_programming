#include "main.h"

/**
 * _isupper - checks if a number is uppercase
 *
 * Return: returns 1 if true, 0 otherwise
 */

int _isupper(char c)
{

		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
