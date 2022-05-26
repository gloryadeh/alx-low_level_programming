#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node
 * @head: pointer to head
 * @index: index of node
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
