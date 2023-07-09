#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 *
 * @ht: table to update or add to
 * @key: is key to add to
 * @value: value associate with string
 *
 * Return: 1 success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int idx, len_hash;

	if (key == NULL)
		return (0);
	len_hash = ht->size; 
	idx = key_index((unsigned char *)key, len_hash);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	temp = ht->array[idx];
	ht->size = len_hash;
	if (temp->next == NULL)
	{
		ht->array[idx] = new;
		ht->array[idx]->next = NULL;
	}
	else
	{
		while (ht->array[idx]->next != NULL)
			ht->array[idx] = ht->array[idx]->next;
		ht->array[idx]->next = new;
	}
	ht->array[idx]->key = strdup(key);
	if (value == NULL)
		ht->array[idx]->value = (char *)value;
	else
		ht->array[idx]->value = strdup(value);
	return (1);
}

/**
 * size_hash - counts size of hash table
 *
 * @ht: hash table
 *
 * Return: size of array
 */

unsigned long int size_hash(hash_table_t *ht)
{
	unsigned long int size;

	for (size = 0; ht->array[size] != NULL; size++)
	{}
	return (size);
}
