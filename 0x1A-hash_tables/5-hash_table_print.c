#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 *
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int on = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i]->next != NULL &&
				ht->array[i]->key != NULL)
		{
			if (on == 1)
			{
				printf(", ");
				print_list(ht->array[i]);
			}
			else
				print_list(ht->array[i]);
			on = 1;

		}
		else if (ht->array[i]->key != NULL)
		{
			if (on == 1)
				printf(", '%s': '%s'", ht->array[i]->key,
					ht->array[i]->value);
			else
				printf("'%s': '%s'", ht->array[i]->key,
						ht->array[i]->value);
			on = 1;
		}
	}
	printf("}\n");
}

/**
 * print_list - prints linked list nodes
 *
 * @head: start of list
 *
 * Return: void
 */

void print_list(hash_node_t *head)
{
	while (head->next != NULL)
	{
		printf("'%s': '%s'", head->key, head->value);
		head = head->next;
	}
	printf("'%s': '%s'", head->key, head->value);
}
