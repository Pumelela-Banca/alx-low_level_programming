#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of array
 * Return: Pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *bb;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL || size == 0)
		return (NULL);
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	bb = malloc(sizeof(hash_node_t));
	if (bb == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array[0] = bb;
	bb->next = NULL;
	bb->value = NULL;
	bb->key = NULL;
	for (i = 1; i < size; i++)
		table->array[i] = NULL;
	table->size = size;
	return (table);
}

/**
 * free_array - frees hash table
 *
 * @array: array to free
 *
 * Return: void
 */

void free_array(hash_node_t **array)
{
	int i;

	for (i = 0; array[i] != NULL; i++)
	{
		free(array[i]);
	}
}
