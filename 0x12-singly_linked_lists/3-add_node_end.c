#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node to end of linked list
 *
 * @head: list to add to
 * @str: data to write
 *
 * Return: address of last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int c = 0;

	last = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		*head = new;
		return (NULL);
	}

	new->str = strdup(str);
	new->next = NULL;
	for (c = 0; str[c] != '\0'; c++)
	{}
	new->len = c;

	while (last != NULL)
	{
		last = last->next;
		if (last->next == NULL)
		{
			last->next = new;
		}
	}
	return (new);
}
