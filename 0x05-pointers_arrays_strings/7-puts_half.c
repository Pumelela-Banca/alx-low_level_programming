#include "main.h"

/**
 * puts_half -print half of a array
 *
 * @str : string to cut
 *
 */

void puts_half(char *str);
{
	int n, loc;

	char position;

	for (n = 0; n < 1000; n++)
	{  
		if (*str == '\0')
		{
			_putchar('\n');
			break;
		}

		position = str[n];

		if (position == '\0')
		{
			if (n == 2)
			{
				_putchar(str[n]);
			}
			if (n % 2 == 0)
			{
				loc = 2;
			}
			else
			{
				loc = (n - 1) / 2;
			}
			while (loc < n)
			{
				_putchar(str[n]);
				loc++;
			}
			_putchar('\n');
			break;
		}
	}
}

