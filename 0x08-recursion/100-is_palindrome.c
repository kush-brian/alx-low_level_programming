#include "main.h"
/**
 * is_palindrome - finds out if a string is palindrome
 * @s: the string
 * Return: returns 1 0r 0
 */
int is_palindrome(char *s)
{
	/* an empty string is a palindrome*/
	if (*s == '\0' || *s == '\n')
		return (1);

	/* find the end of the string */
	char *end = s;

	while (*end != '\0' && *end != '\n')
	{
		end++;
	}
	end--;

	/* compare the characters from both ends of the string*/
	if (*s != *end)
		return (0);
	/* if the characters dont match its not a palindrome*/

	s++;
	*end = '\0';
	return (is_palindrome(s));
}
