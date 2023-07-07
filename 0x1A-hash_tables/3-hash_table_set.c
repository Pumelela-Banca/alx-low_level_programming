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

	if (key == '\0')
		return (0);
	len_hash = size_hash(ht);
	idx = key_index(key, len_hash);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = malloc(sizeof(key) + 1);
	if (new->key = NULL)
		return (0);
	new->value = malloc(sizeof(value) + 1);
	if (new->value = NULL)
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
		whle (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	new->key = strdup(key);
	new->value = stardup(value);
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
	return (size);
}
