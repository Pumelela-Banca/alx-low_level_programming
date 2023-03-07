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
	int i, hold;

	i = 0;

	while (haystack[i] != '\0')
	{
		if (needle[i] ==  haysack[i])
		{
			for (hold = i; needle != 

