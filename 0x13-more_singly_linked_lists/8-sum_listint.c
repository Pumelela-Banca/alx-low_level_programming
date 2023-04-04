#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: start of list
 *
 * Return: sum of all items
 */

int sum_listint(listint_t *head)
{
	int i;

	if (head ==  NULL)
		return (0);
	i = 0;
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
