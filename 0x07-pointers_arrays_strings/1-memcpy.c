#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 *
 * @dest: copy bytes into
 * @src: copy bytes from
 * @n: number of bytes to be copied
 *
 * Return: dest with new contents
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int start;

	for (start = 0; start < n; start++)
	{
		dest[start] = src[start];
	}
	return (dest);
}
