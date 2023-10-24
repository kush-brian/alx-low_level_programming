#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @needle: substring
 * @haystack: string
 * Return: a pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (NULL);
}
