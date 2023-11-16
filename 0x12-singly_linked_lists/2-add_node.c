#include "lists.h"
/**
 * add_node - adds a node at the beginning of a list
 * @head: the pointer to head
 * @str: string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (newnode != NULL)
	{
		newnode->str = strdup(str);
		if (newnode->str == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = strlen(str);
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		return (NULL);
	}

	return (newnode);
}
