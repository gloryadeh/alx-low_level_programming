#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node in the list
 * @head: head node
 * @index: index
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	for (n = 0; head != NULL && n < index; n++)
	{
		head = head->next;
	}
	return (head);
}
