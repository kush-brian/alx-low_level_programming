#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: the integer
 * Return: memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}

	return (memory);
}
