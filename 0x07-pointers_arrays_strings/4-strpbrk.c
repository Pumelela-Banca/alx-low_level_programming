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

	posi1 = 100000;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (c =  0; s[c] != '\0'; c++)
		{
			if (accept[i] == s[c])
				return (s + i)
		}
	}
	return ('\0');
}
