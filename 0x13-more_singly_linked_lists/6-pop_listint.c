#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;
	
	data = 0;

	if (*head == NULL)
		return (0); /* if list is empty*/

	current = *head;
	data = current->n; /* save data of the head node*/
	/* update the head to the next node*/
	*head = current->next;
	free(current);

	return (data);
}
