#include "main.h"
/**
 * _isalpha - check if its alphabet
 * @c: character to test
 * Return: 1(True) else 0 (false)
 */
int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
