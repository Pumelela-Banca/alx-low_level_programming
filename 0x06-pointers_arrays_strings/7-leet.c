#include "main.h"

/**
 * leet - encode characters
 *
 * char *: string to be used
 *
 * Return: Char string.
 */

char *leet(char *na)
{
	int i, c;
	int nums[] = {4, 3, 0, 7, 1};
	char smll[] = {'a', 'e', 'o', 't', 'l'};
	char cpl[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; na[i] != '\0'; i++)
	{
		for (c = 0; c < 5; c++)
		{
			if (na[i] == cpl[c] || na[i] == smll[c])
			{
				na[i] = nums[c];
			}
		}
	}
	return (na);
}
