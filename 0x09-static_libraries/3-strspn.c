#include "main.h"

/**
 * _strspn - length of the prefix
 * @s: is the string
 * @accept: prefix
 * Return: the prefix length
 */

unsigned int _strspn(char *s, char *accept)
{
        unsigned int count = 0;
        int i, j;

        for (i = 0; s[i] != '\0'; i++)
        {
                int found = 0;

                for (j = 0; accept[j] != '\0'; j++)
                {
                        if (s[i] == accept[j])
                        {
                                count++;
                                found = 1;
                                break;
                        }
                }
                if (found == 0)
                {
                        return (count);
                }
        }
        return (count);
}
