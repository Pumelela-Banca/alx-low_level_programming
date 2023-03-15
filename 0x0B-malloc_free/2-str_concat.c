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
	int size1, size2, hold, start, next;
	char *new;

	next = 0;
	for (size1 = 0; s1[size1] != '\0'; size1++)
		continue;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		continue;

	hold = size1 + size2;
	new = malloc(sizeof(*new) * hold);
	for (start = 0; start < hold; start++)
	{
		if (size1 == 0 || s1 == NULL)
			new[start] = s2[start];
		else if (size2 == 0 || s2 == NULL)
			new[start] = s1[start];
		else if (s1 == NULL && s2 == NULL)
			new[start] = '\0'; 
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
