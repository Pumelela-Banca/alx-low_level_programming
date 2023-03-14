#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to newly allocated bytes
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, hold, start, next, ss1, ss2;
	char *new;

	next = 0;
	ss1 = 1;
	ss2 = 1;
	for (size1 = 0; s1[size1] != '\0'; size1++)
		ss1++;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		ss2++;

	if (size1 == 1 && size2 == 1)
	{
		return ('\0');
	}
	else
	{
		hold = size1 + size2;
	}
	new = malloc(sizeof(*new) * hold);
	for (start = 0; start < hold; start++)
	{
		if (size1 == 0 || s1 == NULL)
		{
			new[start] = s2[start];
		}
		else if (size2 == 0 || s2 == NULL)
		{
			new[start] = s1[start];
		}
		if (start < size1)
		{
			new[start] = s1[start];
		}
		else if (s2[next] != '\0')
		{
			new[start] = s2[next];
			next++;
		}
	}
	return (new);
}
