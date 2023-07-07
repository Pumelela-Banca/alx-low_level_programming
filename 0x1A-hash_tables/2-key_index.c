#include "hash_tables.h"

/**
 * key_index - gives index of a key
 *
 * @key: string to find
 * @size: size of array
 *
 * Return: index to store (key/value) pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int num;

	num = hash_djb2(key);
	if (num > size - 1)
	{
		return (num % size);
	}
	else
		return (num);
}
