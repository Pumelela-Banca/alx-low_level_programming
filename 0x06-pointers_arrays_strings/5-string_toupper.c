#include "main.h"

/**
 * string_topper - Turn all characters into upper case
 *
 * @s: letters  to be turned into upper case
 *
 * Return: char *string of upper case letters
 */

char *string_toupper(char *s)
{
	char big[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char small[] = "abcdefghijklmnopqrstuvwxyz";
	int sma, bi;

	for (sma = 0; s[sma] != '\0'; sma++)
	{
		for (bi = 0; bi < 26; bi++)
		{
			if (s[sma] == small[bi])
			{
				s[sma] = big[bi];
				break;
			}
		}
	}
	return (s);
}
