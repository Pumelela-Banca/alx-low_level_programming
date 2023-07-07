#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of array
 * Return: Pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *array[size];
	hash_table_t *table;
	hash_node_t *bb;
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		bb = malloc(sizeof(hash_node_t));
		bb->key = NULL;
		bb->value = NULL;
		bb->next = NULL;
		array[i] = bb;
	}
	table->size = size;
	table->array = array;
	return (table);
}
