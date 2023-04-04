#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position
 * @head: A pointer to the head
 * @index: The index of the node that should be deleted
 * Return: 1 if the node was deleted successfully, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	for (i = 0; i < index && prev != NULL; i++)
	{
		temp = prev;
		prev = prev->next;
	}

	if (i < index)
		return (-1);

	temp->next = prev->next;
	free(prev);

	return (1);
}
