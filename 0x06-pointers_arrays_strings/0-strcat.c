#include "main.h"

/**
 * _strcat- Concatenate, dest with src
 *
 * @dest: add src
 * @src: add to dest
 *
 * Description: add src to dest and return string of both
 *
 * Return: char * (string concatenation).
 */

char *_strcat(char *dest, char *src)
{
	int size, addon;

	char hold;

	for (size = 0; size < 1000; size++)
	{
		hold = dest[size];
		if (hold == '\0')
		{
			break;
		}
	}
	for (addon = 0; addon < size && src[addon] != '\0'; addon++)
	{
		dest[size + addon] = src[addon];
	}
	dest[size + addon] = '\0';
	return (dest);
}
