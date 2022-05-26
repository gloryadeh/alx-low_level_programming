#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a position
 * @head: pointer to head
 * @idx: index of list where node should be added
 * @n: node
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *tmp_old, *newnode;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	newnode = create_newnode(n);
	if (*head == NULL && idx == 0)
	{
		*head = newnode;
		return (newnode);
	}
	if (idx == 0)
	{
		*head = newnode;
	}
	for (i = 0; i < idx - 1 && tmp != NULL && idx != 0; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		newnode->next = tmp;
	else
	{
		tmp_old = tmp->next;
		tmp->next = newnode;
		newnode->next = tmp_old;
	}
	return (newnode);
}

/**
 * create_newnode - creates a new node
 * @n: node;
 * Return: created node
 */
listint_t *create_newnode(int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	return (newnode);
}
