#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *nextnode;

	current	= *head;
	*head = NULL;

	while (current != NULL)
	{
		nextnode = current->next;
		if (*head == NULL)
			free(current);
		current = nextnode;
	}
}
