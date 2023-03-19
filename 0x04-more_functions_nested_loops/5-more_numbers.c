#include "main.h"

/**
 * more_numbers- print 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int a, i, z;

	for (z = 0; z < 10; z++)
	{
		for (a = 48; a < 58; a++)
		{
			_putchar(a);
		}
		for (i = 10; i < 15; i++)
		{
			pri_in(i);
		}
		_putchar('\n');
	}
}
/**
 * pri_in - prints input string
 *
 * @i: string to be printed
 *
 * Return: Void
 */

void pri_in(int i)
{
	int z, c, k, l;
	int si[2];

	c = 0;
	k = i;
	l = 0;

	while (k > 9)
	{
		k -= 10;
		l++;
		si[c] = l;
	}
	si[1] = i % 10;
	for (z = 0; z < 2; z++)
	{
		_putchar('0' + si[z]);
	}
}
