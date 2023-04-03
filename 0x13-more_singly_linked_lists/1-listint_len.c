#include <stdio.h>
#include "lists.h"

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
