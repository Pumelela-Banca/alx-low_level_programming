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
	int nu;

	if (*head == NULL)
	{
		free(*head);
		*head = NULL;
		return (0);
	}
	new = *head;
	if (new->next == NULL)
	{
		nu = new->n;
		free(*head);
		*head = NULL;
		return (nu);
	}
	*head = new->next;
	nu = new->n;
	free(new);
	return (nu);
}
