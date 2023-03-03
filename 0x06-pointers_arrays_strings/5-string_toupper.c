#include "main.h"

/**
 * string_topper - Turn all characters into upper case
 *
 * @char *: letters  to be turned into upper case
 *
 * Return: char *string of upper case letters
 */

char *string_topper(char *src)
{
	char big[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char small[] = "abcdefghijklmnopqrstuvwxyz";
	int sma, bi;

	for (sma = 0; src[sma] != '\0'; sma++)
	{
		for (bi = 0; bi < 26; bi++)
		{
			if (src[sma] == small[bi])
			{
				src[sma] = big[bi];
				break;
			}
		}
	}
	return (src);
}
