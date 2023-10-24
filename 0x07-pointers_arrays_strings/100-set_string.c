#include "main.h"

/**
 * set_string - sets the value of a pointer
 * @s: a pointer to a char pointer
 * @to: a pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
