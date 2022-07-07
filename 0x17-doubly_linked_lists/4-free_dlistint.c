#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
