#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free memory
 *
 * @head: head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}

/**
 * free_listint - free list of ints
 *
 * @head: first item on list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
	head = NULL;
}
