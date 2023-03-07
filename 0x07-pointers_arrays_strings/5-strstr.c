#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: search this string
 * @needle: search for this string
 *
 * Return: The found string bytes
 */

char *_strstr(char *haystack, char *needle)
{
	int i, c;

	i = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (c = 0; needle[c] != '\0'; c++)
		{
			if (needle[c] == haystack[i])
			{
				return (needle);
			}
		}
	}
	return ('\0');
}
