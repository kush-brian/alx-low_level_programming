#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast, *loop;

	if (head == NULL)
		exit(98);
	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;			if (slow == fast)
		{
			loop = slow;
			break;
		}
	}
	if (loop)
	{
		slow = head;
		while (slow != loop)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			count++;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		while (slow != loop)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			count++;
		}
	}
	else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	return (count);
}
