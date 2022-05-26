#include "lists.h"

/**
 * free_listint2 - frees an integer list and sets head to NULL
 * @head: pointer to head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *currptr;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while ((currptr = *head) != NULL)
	{
		currptr = (*head)->next;
		free(*head);
		*head = currptr;
	}
	*head = NULL;
}
