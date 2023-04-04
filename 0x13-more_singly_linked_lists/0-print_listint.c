#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the listint_t list.
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
int num = h->n;

if (num < 0)
{
_putchar('-');
num = -num;
}

if (num / 10)
{
print_listint((const listint_t *)(num / 10));
}

_putchar(num % 10 + '0');

h = h->next;
count++;
}

_putchar('\n');

return (count);
}
