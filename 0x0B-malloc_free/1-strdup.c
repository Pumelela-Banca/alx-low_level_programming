#include "main.h"

/**
 * _strdup- returns a pointer to copy of string that starts
 * in new memory location.
 * @str: string to copy.
 *
 * Return: Pointer to second string
 */

char *_strdup(char *str)
{
	char *send;

	int sizel, two, tree;

	tree = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	for (sizel = 0; str[sizel] != '\0'; sizel++)
	{
		tree++;
		if (str[sizel] == '\0')
			break;
	}

	send = malloc(sizeof(str) * sizel + 1);

	for (two = 0; str[two] != '\0'; two++)
	{
		send[two] = str[two];
	}
	return (send);
}
