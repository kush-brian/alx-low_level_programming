#include "main.h"

/**
 * _memcpy - copies bytes to memory area
 * @dest: the destination
 * @src: the source
 * @n: the number of times
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        /* copy the source to destination */

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }

        return (dest);
}
