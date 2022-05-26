#include "lists.h"

/**
 * add_nodeint_end - prints all elements of an integerlist
 * @head: pointer to head
 * @n: node
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *currptr;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	currptr = *head;

	if (currptr == NULL)
	{
		*head = newnode;
	} else
	{
		while (currptr->next != NULL)
			currptr = currptr->next;
		currptr->next = newnode;
	}
	return (*head);
}
