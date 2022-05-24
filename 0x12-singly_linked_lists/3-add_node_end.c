#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to head
 * @str: string to be duplicated
 *
 * Return: address of  new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	unsigned int i;

	node = (struct list_s *)malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);

	for (i = 0; node->str[i]; i++)
	{}
	node->len = i;
	node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = node;
	} else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
		return(temp);
	}
	return (0);
}
