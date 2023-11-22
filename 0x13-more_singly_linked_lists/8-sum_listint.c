#include "lists.h"
/**
 * sum_listint - returns sum of all the data(n)
 * @head: pointer to head
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	unsigned int sum;

	current = head;
	sum = 0;
	
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
