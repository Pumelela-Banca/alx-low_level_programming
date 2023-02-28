#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s : string
 */

void rev_string(char *s)
{
	int len, stop, size, hold;

	for (len = 0; len < 1000; len++)
	{
		if (*s == '\0')
		{
			*s = "";
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
					hold = *s;
				}
				else
				{
					hold = *(s + size);
				}
				_putchar(hold);
				size--;
			}
			_putchar('\n');
			break;
		}
	}
}

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}