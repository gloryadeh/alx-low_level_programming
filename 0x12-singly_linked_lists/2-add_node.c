#include "lists.h"

/**
 * add_node - adds a new node to the beginning of the list
 * @head: pointer to head pointer
 * @str: string that needs to be duplicated
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = (struct list_s *)malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);

	if (head == NULL)
	{
		*head = node;
	} else
	{
		node->next = *head;
		*head = node;
	}

	return (*head);
}
