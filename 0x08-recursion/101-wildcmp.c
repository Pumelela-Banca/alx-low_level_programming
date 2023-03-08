#include "main.h"

/**
 * wildcmp - compare two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 for identical and 0 for false.
 */

int wildcmp(char *s1, char *s2)
{
	if (s2[0] == '*' && s2[1] == '\0')
	{
		return (1);
	}
	else if (
