#include "main.h"

/**
 * _strncat- add n bytes from src to dest
 *
 * @dest: string to add on
 * @src: take bytes from and add them to dest
 * @n: number of bytes from src to dest
 *
 * Return: cahr * (dest + src(n))
 */

char *_strncat(char *dest, char *src, int n)
{
	int size;

	char hold;

	for (size = 0; size < 1000; size++)
	{
		hold = dest[size];
		if (hold == '\0')
		{
			break;
		}
	}
	for (addon = 0; addon < n && src[addon] != '\0'; addon++)
	{
		dest[size + addon] = src[addon];
	}
	dest[size + addon] = '\0';
	return (dest);
}
