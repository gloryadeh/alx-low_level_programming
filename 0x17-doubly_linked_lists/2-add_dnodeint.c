#include "lists.h"

/**
 * add_dnodeint- adds a new node at the beginning of a list
 * @head: pointer to head node
 * @n: new node
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/* create new node and allocate memory */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* assign data to new */
	new->n = n;
	/* next points to *head */
	new->next = *head;
	/* prev points to NULL */
	new->prev = NULL;
	/* make new node head */
	/* point prev of head to new */
	if (*head != NULL)
		(*head)->prev = new;
	/* point head to node */
	*head = new;

	return (new);
}
