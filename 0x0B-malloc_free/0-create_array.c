#include "main.h"

/**
 * create_array - creates an array of chars and 0 is specific
 * @size: int, size of array
 * @c: character to start array
 *
 * Return: pointer to rest of  array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int start;
	int up;
	char *names;

	if (size == 0)
	{
		return ('\0');
	}
	up = size;

	names = malloc(sizeof(char) * up);

	for (start = 0; start < size; start++)
	{
		names[start] = c;
	}
	return (names);
	free(names);
}
