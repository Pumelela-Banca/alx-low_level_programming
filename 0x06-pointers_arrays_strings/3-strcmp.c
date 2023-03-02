#include "main.h"

/**
 * _strcmp- compare two strings
 *
 * Description: Strings to be compared using _strcmp.
 * @s1: first string
 * @s2: second string
 *
 * Return: int 0 for equal, -1 for s1 < s2, 1 for s1 > s2.
 */

int look_up(char c);

int _strcmp(char *s1, char *s2)
{
	int count1, count2, vals1, vals2;
	char hold;

	vals1 = 0;
	vals2 = 0;

	for (count1 = 0;  (s1[count1]) != '\0'; count1++)
	{
		hold = s1[count1];
		vals1 = vals1 + look_up(hold);
		count1++;
	}
	for (count2 = 0;  (s2[count2]) != '\0'; count2++)
	{
		hold = s1[count2];
		vals2 = vals2 + look_up(hold);
		count2++;
	}
	return (vals1 - vals2);
}

/**
 * look_up- look up ascii VALUE for char
 *
 * Description: character to ascii look up.
 * @c : char to be looked at.
 *
 * Return: int, ascii value of c
*/

int look_up(char c)
{
	int ho;
	char names[91] = "!\"#$%&'()*+,-."
		"/0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz";

	for (ho = 0; ho < 91; ho++)
	{
		if (c == names[ho])
		{
			break;
		}
		ho++;
	}
	return (ho + 33);
}
