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
	list_t *new;
	list_t *last;
	char *ll;
	int c = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		*head = new;
		return (NULL);
	}
	last = *head;
	ll = strdup(str);
	new->str = ll;
	new->next = NULL;
	for (c = 0; str[c] != '\0'; c++)
	{}
	new->len = c;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
