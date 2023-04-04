#include "lists.h"

/**
 * add_nodeint_end - add a node at the end
 * @head:pointer to the head pointer
 * @n: data
 * Return: structure new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tail;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return	(NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		tail = newNode;
	}
	tail->next = newNode;
	tail = newNode;

	return (newNode);
}
