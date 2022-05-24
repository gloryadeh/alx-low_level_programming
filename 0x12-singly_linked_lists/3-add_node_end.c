#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to head
 * @str: string to be duplicated
 *
 *Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *node;

	node = (struct list_s *)malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);

	for (i = 0; node->str[i]; i++)
	{}
	node->len = i;
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
