#include "lists.h"
/**
 * listint_len - returns no of elements
 * @h: elements
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count;

	for (node_count = 0; h != 0; node_count++)
		h = h->next;

	return (node_count);
}
