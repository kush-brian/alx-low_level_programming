#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to head
 * @n: integer
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			/* traverse the list to find the last node */
			current = current->next;
		}
		/* update the last node's next pointer ot the new node*/
		current->next = newnode;
	}
	return (newnode);
}
