#include "lists.h"

/**
 * add_nodeint - add node at the beginning of a list
 * @head: pointer to head of list_int
 * @n: data
 * Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->next = *head;
	newNode->n = n;
	*head = newNode;

	return (newNode);
}
