#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s : string
 */

void rev_string(char *s)
{
	int len, stop, size, hold;

	char keep[1000];

	for (len = 0; len < 1000; len++)
	{
		if (*s == '\0')
		{
			s = "";
			break;
		}

		stop = *(s + len);
		keep[len] = stop;

		if (stop == '\0')
		{
			size = len - 1;
			hold = 0;
			while (size >  -1)
			{
				if (size == 0)
				{
					 s[hold] = *keep;
				}
				else
				{
					s[hold] = *(keep + size);
				}
				hold++;
				size--;
			}
			break;
		}
	}
}
