#include "main.h"

/**
 * print_rev -  print string in reverse
 *
 * @s: String input
 */

void print_rev(char *s)
{
	int len, stop, size;

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
			break;
		}
	}
	
	while (len >  -1)
	{
		_putchar(*(s + len));
		len--;
	}
}
