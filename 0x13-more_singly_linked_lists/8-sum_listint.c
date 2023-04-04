#include "lists.h"

/**
 * sum_listint - add all data
 * @head: A pointer to the head
 * Return: total data
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
	total += head->n;
	head = head->next;
	}

	return (total);
}
