#include "lists.h"

/**
 * free_listint2 - free a list
 * @head:pointer to a head pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL)
		return;
	
	while (*head != NULL)
	{
		*temp = *head;
		*head = *head->next;
		free(temp);
	}

	*head = NULL;
}
