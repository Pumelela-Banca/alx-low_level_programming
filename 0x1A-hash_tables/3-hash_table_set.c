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
	hash_node_t *temp, *new;
	unsigned long int idx, len_hash;

	if (key == NULL || ht->array == NULL)
		return (0);
	len_hash = ht->size; 
	idx = key_index((unsigned char *)key, len_hash);
	temp = ht->array[idx];
	ht->size = len_hash;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	if (temp->key != NULL)
	{
		new->next = temp;
		new->value = strdup(value);
		/*new->key = malloc(sizeof(strlen(key)) + 1);*/
		/*if (new->key == NULL)*/
		/*	return (0);*/
		/*strcpy(new->key, key);*/
		new->key = strdup(key);
		ht->array[idx] = new;
	}
	else if (temp->key == NULL)
	{
		temp->value = strdup(value);
		/*temp->key = malloc(sizeof(strlen(key)) + 1);*/
		/*if (temp->key == NULL)*/
		/*	return (0);*/
		/*strcpy(temp->key, key);*/
		temp->key = strdup(key);
		free(new);
	}
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
