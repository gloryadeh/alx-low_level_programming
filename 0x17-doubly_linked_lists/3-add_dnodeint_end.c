#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head node
 * @n: new node
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	/* create new node and allocate memory */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* assign data to new */
	new->n = n;
	/* store head node temporarily */
	temp = *head;
	/* if linked list is empty, make new node head */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	/* if list is not empty, traverse to end */
	while (temp->next != NULL)
		temp = temp->next;
	/* last node is temp, point next of temp to new node */
	temp->next = new;
	/* assign prev of new node to temp */
	new->prev = temp;
	return (new);
}
