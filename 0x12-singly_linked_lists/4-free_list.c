#include "lists.h"
#include <stdlib.h>

/**
 *
 * free_list - frees list memory
 *
 * @head: linked list to free
 *
 * Return: Void.
 */

void free_list(list_t *head)
{
	list_t *hold;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		hold = head->next;
		hold->str = NULL;
		free(head);
		head = hold->next;
	}
}
