#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s : string
 */

void rev_string(char *s)
{
	int len, stop, size, hold;
	char keep;
	
	keep = *s;

	for (len = 0; len < 1000; len++)
	{
		if (*s == '\0')
		{
			s = "";
			break;
		}

		stop = *(s + len);

		if (stop == '\0')
		{
			size = len - 1;
			while (size >  -1)
			{
				if (size == 0)
				{
					hold = keep[0];
				}
				else
				{
					hold = keep[size];
				}
				s[size] = hold;
				size--;
			}
			break;
		}
	}
}
