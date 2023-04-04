#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements in a list
 * @h: A pointer to the listint_t list.
 * Return: nodes and content
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeNumber = 0;

	if (h == NULL)
	{
		printf("no elements in the list");
		return (-1);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeNumber++;
	}
	return (nodeNumber);
}
