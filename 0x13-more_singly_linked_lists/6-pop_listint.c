#include "lists.h"

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
		return (0);
	new = *head;
	if (new->next == NULL)
	{
		*head = NULL;
		return (new->n);
	}
	*head = new->next;
	return (new->n);
}
