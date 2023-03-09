#include "main.h"

/**
 * compc - compare two characters
 *
 * @s: string
 * @down: go down from word
 * @up:  go up in word
 *
 * Return: 1 for true  0 for false
 */

int compc(char *s, int down, int up)
{
	if (s[up] == '\0')
	{
		return (1);
	}
	else if (s[down] != s[up])
	{
		return (0);
	}
	else
	{
		return (compc(s, down - 1, up + 1));
	}
}

/**
 * _strlen_recursion - get len of string
 *
 * @s: string to measure
 * Return : size of string
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

/**
 * is_palindrome - check if string is a palindrome
 *
 * @s: string
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int strln;

	strln = _strlen_recursion(s);

	if (s[0] == '\0')
		return (1);

	return (compc(s, strln - 1, 0));
}
