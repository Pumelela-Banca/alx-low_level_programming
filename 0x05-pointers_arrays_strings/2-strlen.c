#include "main.h"

/**
 * _strlen - count len of string
 *
 * @s: string to be counted
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len, stop;

	for (len = 1; len < 1000; len++)
	{
		stop = *(s + len);
		if (stop == '\0' && len == 1)
		{
			return (len);
		}
	}
	return (0);
}
