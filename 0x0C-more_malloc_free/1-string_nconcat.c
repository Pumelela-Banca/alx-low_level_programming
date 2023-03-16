#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to new space.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sum;
	unsigned int i, z;

	if (s1 == NULL && n > 0)
	{
		i = _strlen_recursion(s2) - n + 1;
		sum = malloc(i * sizeof(sum));
		for (z = 0; z < n; z++)
		{
			sum[z] = s2[z];
		}
		sum[z] = '\0';
	}
	else if (s1 == NULL)
	{
		i = _strlen_recursion(s2) + 1;
                sum = malloc(i * sizeof(sum));
                for (z = 0; s2[z] == '\0'; z++)
                {
                        sum[z] = s2[z];
                }
	}
	else if (s2 == NULL)
	{
		i = _strlen_recursion(s1) + 1;
		sum = malloc(i * sizeof(sum));
		for (z = 0; s1[z] == '\0'; z++)
		{
			sum[z] = s2[z];
		}
	}
	else
	{
		i = _strlen_recursion(s2);
		if (n < i)
		{
			return (strln(s1, s2, n));
		}
		else if (n > i)
		{
			return (strln(s1, s2, i));
		}

	}
	return (sum);
}

/**
 * strln - same as string_nconcat but for s1 and s2 positive
 * and n positive.
 * @s1: first string
 * s2: second string
 * @n: number of bytes from s2
 *
 * Return: string containing concatenation.
 */

char *strln(char *s1, char *s2, unsigned int n)
{
	unsigned int i, z, c, ss;
	char *new;

	i = _strlen_recursion(s1) + n;
	new = malloc(i + 1);
	for (z = 0; s1[z] != '\0'; z++)
	{
		new[z] =  s1[z];
	}
	for (c = 0; c < n; c++)
	{
		ss = z + c;
		new[ss] = s2[c];
	}
	ss++;
	new[ss] = '\0';
	return (new);
}

/**
 * _strlen_recursion - return the length of a string
 *
 * @s: string to check len of
 *
 * Return: int as length  of string.
 */

unsigned int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion((s + 1)));
	}
	return (0);
}
