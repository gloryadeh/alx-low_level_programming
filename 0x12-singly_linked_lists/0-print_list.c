#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements in a list
 * @h: pointer to list
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", 0, "nil");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}
