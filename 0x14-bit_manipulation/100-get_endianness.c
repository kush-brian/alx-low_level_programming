#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: o if big endian, 1 if little
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return ((int)(*byte));
}
