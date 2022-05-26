#include "lists.h"

/**
 * free_listint - frees an integer list
 * @head: pointer to head
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *currptr;

	if (head == NULL)
	{
		return;
	}
	while ((currptr = head) != NULL)
	{
		currptr = head->next;
		free(head);
		head = currptr;
	}
}
