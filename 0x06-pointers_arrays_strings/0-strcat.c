#include "main.h"
#include <stdio.h>
/**
 * _strcat - concanates two strings
 * @dest: the destination
 * @src: the source file
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
        int i;
        int j;

        for (i = 0; i <= '\0'; i++)
        {
                for (j = 0; j == i; j++)
                {
                        dest[i + j] = src[i];
                }
                dest[i + j] = '\0';
        }
	return dest;
}
