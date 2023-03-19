#include "main.h"

/**
 * more_numbers- print 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int a, i;

	for (i = 0; i < 9; i++)
	{
		for (a = 48; a < 58; a++)
		{
			_putchar(a);
		}

		_putchar('0' + 1);
		_putchar('0' + 0);
		_putchar('0' + 1);
		_putchar('0' + 1);
		_putchar('0' + 1);
		_putchar('0' + 2);
		_putchar('0' + 1);
		_putchar('0' + 3);
		_putchar('0' + 1);
		_putchar('0' + 4);
		_putchar('\n');
	}
}
