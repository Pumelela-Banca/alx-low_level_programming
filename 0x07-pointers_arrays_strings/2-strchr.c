#include "main.h"

/**
 * _strchr - locate character in  a string
 *
 * @s: search this string
 * @c: find this character
 *
 * Return: Search status, first occurance of c or NULL
 * if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == '\0')
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
