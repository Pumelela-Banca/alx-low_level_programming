#include <stdlib.h>
#include "lists.h"

/**
 *
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
	
	while (head->next != NULL)
	{
		hold = head;
		head = head->next; 
		free(hold);
	}
}
