#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to head
 * @str: string
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newnode;
	}

	return (newnode);
}
