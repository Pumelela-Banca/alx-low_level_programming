#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 *
 * @h: element in list
 *
 * Return: int with number of elements
 */

size_t list_len(const list_t *h)
{
	size_t cc = 0;

	while (h != NULL)
	{
		h = h->next;
		cc++;
	}
	return (cc);
}
