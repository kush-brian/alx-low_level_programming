#include "main.h"
/**
 * binary_to_uint - converts a binary no to unsigned int
 * @b: string of 0 & 1
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		/*shift the result to the left and add the current bit */
		dec_num = (dec_num << 1) | (*b - '0');
		b++;
	}
	return (dec_num);
}
