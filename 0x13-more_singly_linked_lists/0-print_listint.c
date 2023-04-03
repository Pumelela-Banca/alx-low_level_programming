#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements in list
 *
 * @h: list head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		i++;
		printf("%lu\n");
		h = h->next;
	}
	return (i);
}
