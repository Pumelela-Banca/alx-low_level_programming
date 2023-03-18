#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Returns: void
 */

void times_table(void)
{
	int i, j, z, m, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			z = i * j;
			if (j != 9 && z < 10)
			{
				_putchar('0' + z);
				_putchar(',');
				_putchar(' ');
			}
			else if (j != 9 && z > 9)
			{
				c = z % 10;
				m = z - c;
				_putchar('0' + m);
				_putchar('0' + c);
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9 && z > 9)
			{
				c = z % 10;
                                m = z - c;
                                _putchar('0' + m);
                                _putchar('0' + c);
				_putchar('\n');
			}
			else
			{
				_putchar('0' + z);
                                _putchar('\n');
			}

		}
	}
}
