#include "lists.h"

/**
 * print_listint - prints all elements of an integer list
 * @h: pointer to head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
