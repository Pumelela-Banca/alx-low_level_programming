#include "hash_tables.h"

/**
 * hash_table_get - retrives a value associated with key
 *
 * @ht: hash table
 * @key: key to get
 *
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size, idx;
	hash_node_t *temp;

	size = ht->size;
	idx = key_index((unsigned char *)key, size);

	if (ht->array[idx]->next == NULL)
		return (ht->array[idx]->value);
	temp = ht->array[idx];
	while (temp->next != NULL)
	{
		if (strcmp(temp->key, (char *)key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
