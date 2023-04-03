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
	
	hold = head;
	while (head->next != NULL)
	{
		hold = hold->next; 
		free(hold);
	}
}
