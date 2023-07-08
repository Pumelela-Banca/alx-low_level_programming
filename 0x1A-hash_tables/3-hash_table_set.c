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
	len_hash = size_hash(ht);
	idx = key_index((const unsigned char *)key, len_hash);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	temp = ht->array[idx];
	ht->size = len_hash;
	if (temp == NULL)
	{
		temp = new;
		new->next = NULL;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	new->key = strdup(key);
	new->value = strdup(value);
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
