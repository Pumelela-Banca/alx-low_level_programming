#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, c, k;

	i = 0;
	j = 0;
	c = 0;
	k = 0;
	while (i < 3)
	{
		pr_tm(i, j, c, k);
		k++;
		if (k == 10)
			c++;
		if (c == 6)
			j++;
		if (j == 10)
			i++;
		if (i == 2 && j == 3 && c == 5 && k == 9)
		{
			pr_tm(i, j, c, k);
			break;
		}
		if (k == 10)
			k = 0;
		if (c == 6)
			c = 0;
		if (j == 10)
			j = 0;
	}
}

/**
 * pr_tm - print time
 *
 * @i: hour
 * @j: min
 * @c: seconds tens
 * @k: seconds unit
 *
 * Return: void.
 */

void pr_tm(int i, int j, int c, int k)
{
	_putchar('0' + i);
	_putchar('0' + j);
	_putchar(':');
	_putchar('0' + c);
	_putchar('0' + k);
	_putchar('\n');
}
