#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i]->next != NULL)
			free_list(ht->array[i]);
		else
		{
			ht->array[i]->key = '\0';
			free((ht->array[i]->key));
			ht->array[i]->value = '\0';
			free((ht->array[i]->value));
			free(ht->array[i]);
		}

	}
	free(ht);
}

/**
 * free_list - fress linked list
 *
 * @h: first item of llist
 *
 * Return: void
 */

void free_list(hash_node_t *h)
{
	hash_node_t *temp;

	while (h->next != NULL)
	{
		temp = h;
		temp->key[0] = '\0';
		free(temp->key);
		temp->value[0] = '\0';
		free(temp->value);
		h = h->next;
		free(temp);
	}
}
