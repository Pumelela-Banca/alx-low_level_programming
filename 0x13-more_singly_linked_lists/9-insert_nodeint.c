#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert new node at given position
 *
 * @head: list head.
 * @idx: index to insert node in
 *
 * Return: address of node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *cpy, *new;

	cpy = *head;
	c = listint_len(cpy);
	if (*head == NULL)
		return (NULL);
	if ((idx + 2) > c)
		return (NULL);
	if (idx == 0)
	{
		new = add_nodeint(&cpy, n);
		return (new);
	}
	else if ((idx + 1) == c)
	{
		new = add_nodeint_end(&cpy, n);
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
	listint_t *temp, *new;
	unsigned int c;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	for (c = 1; c < (idx + 1); c++)
	{
		temp = temp->next;
		if (c == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
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
	listint_t *temp, *hold;

	hold = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = hold;
	*head = temp;
	return (temp);
}
