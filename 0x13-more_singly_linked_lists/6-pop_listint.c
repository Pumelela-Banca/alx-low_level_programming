#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node of a list
 *
 * @head: Node to delete
 *
 * Return: data of node
 */

int pop_listint(listint_t **head)
{
	listint_t *new;

	if (*head == NULL)
	{
		free(*head);
		return (0);
	}
	new = *head;
	if (new->next == NULL)
	{
		*head = NULL;
		free(*head);
		return (new->n);
	}
	*head = new->next;
	free(new);
	return (new->n);
}
