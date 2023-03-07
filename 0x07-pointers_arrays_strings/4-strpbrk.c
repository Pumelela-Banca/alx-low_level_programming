#include "main.h"

/**
 * _strpbrk- search string for any set of bytes
 *
 * @s: searchfrom this string
 * @accept: search  these words
 *
 * Return: string containing all found chars
 */

char *_strpbrk(char *s, char *accept)
{
	int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[i] == accept[c])
				return (s + i);
		}
	}
	return ('\0');
}
