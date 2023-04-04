#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @h: pointer to the pointer of h
 * Return: size that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (next >= current)
		{
			*h = NULL;
			exit(98);
		}
		current = next;
	}

	*h = NULL;
	return (count);
}
