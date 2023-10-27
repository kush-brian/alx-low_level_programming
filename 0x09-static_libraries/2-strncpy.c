#include "main.h"
/**
 * *_strncpy - copies a string to another
 * @dest: the destination of the string
 * @src: the source of the string
 * @n: the max no of characters to be copied
 * Return: returns the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }

        while (i < n)
        {
                dest[i] = '\0';
                i++;
        }

        return (dest);
}
