#include "lists.h"

/**
 * sum_listint - gets the sum of all data ina a list
 * @head: pointer to head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	for (i = 0; head != NULL; i++)
	{
		if (head == NULL)
		{
			return (0);
		}
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
