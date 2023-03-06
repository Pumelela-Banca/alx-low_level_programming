#include "main.h"

/**
 * _memset- Replace bytes in memory with a
 * constant character
 *
 * @s: string where replacement takes place.
 * @b: character replacement.
 * @n: number of bytes to be replaced.
 *
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int start;

	for (start = 0; start <  n; start++)
	{
		s[start] = b;
	}
	return (s);
}
