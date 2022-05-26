#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to head
 * @index: index of node that should be deleted
 * Return: 1 if success, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *currptr, *node;

	currptr = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && currptr != NULL && index != 0; i++)
	{
		currptr = currptr->next;
	}
	if (currptr == NULL)
		return (-1);
	if (index == 0)
	{
		node = currptr->next;
		free(currptr);
		*head = node;
	} else
	{
		if (currptr->next == NULL)
			node = currptr->next;
		else
			node = currptr->next->next;
		free(currptr->next);
		currptr->next = node;
	}
	return (1);
}
