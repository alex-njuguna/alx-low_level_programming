#include "list.h"

/**
 * get_nodeint_at_index - get the nth node in a list
 * @head: pointer to the head node
 * @index: index of the node to retrieve (starting at 0)
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; i < index && current != NULL; i++)
	{
	current = current->next;
	}

	return current;
}
