#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * 
 * @head: list to delete from
 * @index: item to delete
 *
 * Return: confirmation.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copy, *hold;
	unsigned int i;

	copy = *head;
	
	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = copy->next;
		free(copy);
		return (1);
	}
	i = 0;
	hold = malloc(sizeof(listint_t));
	while (copy->next != NULL)
	{
		hold = copy;
		if (i == index)
		{
			hold->next = copy;



}
