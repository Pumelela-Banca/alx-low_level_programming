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

	int sizel, two;

	for (sizel = 0; str[sizel] != '\0'; sizel++)

	send = malloc(sizeof(*send) * sizel);

	for (two = 0; str[two] != '\0'; two++)
	{
		send[two] = str[two];
	}
	return (send);
}
