#include "main.h"

/**
 * cap_string - capitalize all words of a string
 *
 * @s: string to be capitalized
 *
 * Return: string that has been capitalized
 */

char *cap_string(char *s)
{
	int dimen1, dimen2;
	char separ[] = {',', '\t', '.', ';', '!',
		'?', '"', '\n', '(', ')', '{', '}', ' '};

	for (dimen1 = 0; s[dimen1] != '\0'; dimen1++)
	{
		if (dimen1 == 0 && s[dimen1] >= 'a' && s[dimen1])
		{
			s[dimen1] -= 32;
		}
		for (dimen2 = 0; dimen2 < 13; dimen2++)
		{
			if (s[dimen1] == separ[dimen2])
					{
						if (s[dimen1 + 1] >= 'a' && s[dimen1 + 1] <= 'z')
						{
							s[dimen1 + 1] -= 32;
						}
					}
		}
	}
	return (s);
}
