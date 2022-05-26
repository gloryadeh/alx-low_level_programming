#include "lists.h"

/**
 * listint_len - prints all elements of an integer list
 * @h: pointer to head
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
