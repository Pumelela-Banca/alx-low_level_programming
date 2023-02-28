#include "main.h"

/**
 * print_rev -  print string in reverse
 *
 * @s: String input
 */

void print_rev(char *s)
{
	int len, stop, size, hold;

	for (len = 0; len < 1000; len++)
	{
		if (*s == '\0')
		{
			_putchar('\n');
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
