#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node to start of list
 *
 * @head: head of list
 * @n: number to add on list
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	*head = temp;
}
