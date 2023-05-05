#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert new node at given position
 *
 * @head: list head.
 * @idx: index to insert node in
 * @n: data to be stored
 *
 * Return: address of node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *cpy, *new;

	cpy = *head;
	c = listint_len(cpy);
	if ((idx + 1) > c)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if ((idx + 1) == c)
	{
		new->next = NULL;
		while (cpy->next != NULL)
			cpy = cpy->next;
		cpy->next = new;
		return (new);
	}
	else
	{
		new = add_node_center(&cpy, n, idx);
		return (new);
	}
}

/**
 * add_node_center - adds node between nodes
 *
 * @head: list to add to
 * @n: data to add
 * @idx: index to add on
 *
 * Return: address of added node
 */

listint_t *add_node_center(listint_t **head, const int n, unsigned int idx)
{
	listint_t *temp = NULL, *new = NULL;
	unsigned int c;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	c = 1;
	while (c < (idx + 1))
	{
		temp = temp->next;
		if (c == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (temp->next);
		}
		c++;
	}
	return (NULL);
}

/**
 * listint_len - return number of elements in list
 *
 * @h: list head
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
