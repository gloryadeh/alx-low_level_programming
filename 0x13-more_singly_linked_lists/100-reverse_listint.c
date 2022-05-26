#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list
 * @head: pointer to head
 * Return: pointer to first element of the reversed string
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *new_tmp;

	if (head == NULL || *head == NULL)
		return (NULLL);
	tmp = *head;
	*head = tmp->next;
	tmp->next = NULL;

	while (*head != NULL)
	{
		new_tmp = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		if (new_tmp == NULL)
			return (*head);
		*head = new_tmp;
	}
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	return (NULL);
}
