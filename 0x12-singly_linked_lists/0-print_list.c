#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to list_t
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		node_count++;
	}

	return (node_count);
}
