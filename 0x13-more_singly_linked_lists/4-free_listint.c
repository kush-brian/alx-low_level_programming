#include "lists.h"
/**
 * free_listint  - frees a linked list
 * @head: head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *nextnode;
	listint_t *current = head;

	while (current != NULL)
	{
		/* save the nxt node before freeing the current one*/
		nextnode = current->next;
		/* free the current node */
		free(current);
		/* move to the next node */
		current = nextnode;
	}
}
