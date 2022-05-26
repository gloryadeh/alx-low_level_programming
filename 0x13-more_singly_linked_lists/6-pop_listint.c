#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to head pointer
 * @Return: data of head node
 */
int pop_listint(listint_t **head)
{
	int n; /*element to be removed*/
	listint_t *currptr;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n; /*get data from head*/
	currptr = *head; /*point currptr to head node*/
	*head = (*head)->next; /*make head the next node*/
	free(currptr); /*free prev head node in currptr*/

	return (n);
}
