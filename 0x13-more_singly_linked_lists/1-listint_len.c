#include "lists.h"

/**
 * listint_len - return num of elements in a list
 * @h: pointer to the listint_t
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h->next == NULL)
	{
		return (count);
	}

	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
