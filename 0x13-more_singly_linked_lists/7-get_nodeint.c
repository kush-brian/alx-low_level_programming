#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer to head
 * @index: nth node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	current = head;
	i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
