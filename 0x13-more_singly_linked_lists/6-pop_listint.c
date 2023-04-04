#include "lists.h"

/**
 * pop_listint - delete a head and return its data
 * @head: pointer to head pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
