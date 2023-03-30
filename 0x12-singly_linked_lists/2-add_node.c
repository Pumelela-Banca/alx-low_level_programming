#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node at start of function
 *
 * @head: first element in linked list
 * @str: data in new element
 *
 * Return: adders of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *temp;
	char *ll;

	temp = malloc((sizeof(list_t)));
	if (temp == NULL)
		exit(98);
	for (i = 0; str[i] != '\0'; i++)
	{}
	ll = strdup(str);
	temp->len = i;
	temp->next = *head;
	temp->str = ll;
	*head = temp;
	return (temp);
}
