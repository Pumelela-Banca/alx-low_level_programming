#include "main.h"

/**
 * puts_half -print half of a array
 *
 * @str : string to cut
 *
 */

void puts_half(char *str)
{
	int n, loc, ood;

	char position;

	for (n = 0; n < 1000; n++)
	{
		if (*str == '\0')
		{
			_putchar('\n');
			break;
		}

		position = *(str + n);

		if (position == '\0')
		{
			if (n % 2 == 0)
			{
				loc =  n / 2;
			}
			else
			{
				ood = n - 1;
				loc =  ood / 2;
			}
			while (loc < n)
			{
				position = *(str + loc);
				_putchar(position);
				loc++;
			}
			_putchar('\n');
			break;
		}
	}
}
