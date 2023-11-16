#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: head of list
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *nextnode;

	while (current != NULL)
	{
		nextnode = current->next;
		free(current->str);
		free(current);
		current = nextnode;
	}
}
