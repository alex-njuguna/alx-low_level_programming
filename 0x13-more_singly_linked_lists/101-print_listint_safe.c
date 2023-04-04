#include "lists.h"

/**
 * print_listint_safe - Prints a list.
 * @head: a pointer to the head node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;
	slow = slow->next;
	fast = fast->next->next;

	if (slow == fast)
	{
		slow = head;

		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next;
			fast = fast->next;
		}

		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		break;
        }
	}

	return (count);
}
