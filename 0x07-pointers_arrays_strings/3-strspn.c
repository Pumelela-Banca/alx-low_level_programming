#include "main.h"

/**
 * _strspn- get length of  a prefix substring
 *
 * @s: search for bytes from here
 * @accept: search for  these  bytes in s
 *
 * Return: int with the number of bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, ind, num, in;

	num = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		in = 0;
		for (ind = 0; accept[ind] != '\0'; ind++)
		{
			if (s[count] == accept[ind])
			{
				num++;
				in = 1;
			}
		}
		if (in == 0)
		{
			break;
		}
	}
	return (num);
}
