#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: is the character with string
 * Return: the length counted
 */

int _strlen(char *s)
{
        int length = 0;

        while (s[length] != '\0')
        {
                length++;
        }

        return (length);
}
