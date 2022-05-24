#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
