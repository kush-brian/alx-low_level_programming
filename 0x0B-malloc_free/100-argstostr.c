#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments
 * @ac: the arg count
 * @av: the arg vector
 * Return: pointer to concatenated args
 */
char *argstostr(int ac, char **av)
{
	int i;
	int current_index = 0;
	int total_len = 0;
	int arg_length;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* calc the total length needed + the new line*/
	for (i = 0; i < ac; i++)
	{
		arg_length = 0;
		while (av[i][arg_length] != '\0')
		{
			arg_length++;
		}
		total_len += arg_length + 1;
	}
	/* allocate the memory for the string */
	concatenated = (char *)malloc(sizeof(char) * total_len);

	if (concatenated == NULL)
		return (NULL);
	/* concatenate the arguments with newline characters */
	for (i = 0; i < ac; i++)
	{
		arg_length = 0;
		while (av[i][arg_length] != '\0')
		{
			concatenated[current_index] = av[i][arg_length];
			arg_length++;
			current_index++;
		}
		concatenated[current_index] = '\n';
		current_index++;
	}
	concatenated[current_index] = '\0';

	return (concatenated);
}
