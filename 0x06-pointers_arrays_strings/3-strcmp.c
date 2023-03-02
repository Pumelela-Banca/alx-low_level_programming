#include "main.h"

/**
 * _strcmp - copare two strings
 *
 * @s1: first input
 * @s2: second input
 *
 * Return: int value and the differences
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] - s2[i] == 0) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
