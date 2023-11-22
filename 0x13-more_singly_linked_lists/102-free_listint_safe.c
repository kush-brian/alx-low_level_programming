#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp, *loop;

	if (h == NULL || *h == NULL)
		return (0);

	loop = find_loop(*h);
	while (*h != NULL)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		count++;
		if (loop && tmp == loop)
			break;
	}
	*h = NULL;
	return (count);
}

/**
 * find_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: the address of the node where the loop starts
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);
	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (slow);
	}
	return (NULL);
}

