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
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] %s\n", "nil");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
