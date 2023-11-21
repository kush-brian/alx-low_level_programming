#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: elements
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	while (h != 0)
	{
		if (h->n == 0)
			printf("%d\n", 0);
		else
			printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
