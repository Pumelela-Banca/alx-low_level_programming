#include "main.h"

/**
 * string_topper - Turn all characters into upper case
 *
 * @char *: letters  to be turned into upper case
 *
 * Return: char *string of upper case letters
 */

char *string_topper(char *s)
{
	/*char big[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char small[] = "abcdefghijklmnopqrstuvwxyz";
	int sma, bi;

	for (sma = 0; str[sma] != '\0'; sma++)
	{
		for (bi = 0; bi < 26; bi++)
		{
			if (str[sma] == small[bi])
			{
				str[sma] = big[bi];
				break;
			}
		}
	}
	return (str);*/
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s)
}
