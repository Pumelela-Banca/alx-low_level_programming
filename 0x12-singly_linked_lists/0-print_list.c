#include "lists.h"

/**
 * print_list - print all elements of list_t
 *
 * @h: struct data, with char string, len of string and pointer to next item
 *
 * Return: size_t, number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cc = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		cc++;
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cc++;
	}
	return (cc);
}
