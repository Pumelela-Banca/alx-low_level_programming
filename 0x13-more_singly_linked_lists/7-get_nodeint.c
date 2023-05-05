#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: start of linked list
 * @index: Index of node to  return
 *
 * Return: Node of list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *hold;

	hold = head;
	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	i = 0;
	while (hold != NULL)
	{
		if (i == index)
			return (hold);
		hold = hold->next;
		i++;
	}
	return (NULL);
}
