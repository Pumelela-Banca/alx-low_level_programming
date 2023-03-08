#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 *
 * @s: string to check len of
 *
 * Return: int as length  of string.
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion((s + 1)));
	}
	return (0);
}
