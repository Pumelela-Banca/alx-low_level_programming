#include "main.h"

/**
 * print_binary - print binary representation of number
 *
 * @n: number to turn into binary
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i, musk;
	int sign;

	if (n == 1)
	{
		_putchar('0' + 1);
		return;
	}
	else if (n == 0)
	{
		_putchar('0' + 0);
		return;
	}
	for (i = 20; i >= 1; i--)
	{
		musk = (1 << i);
		if (n & musk)
		{
			sign = 1;
			_putchar('0' + 1);
		}
		else
		{
			if (sign != 1)
				continue;
			_putchar('0' + 0);
		}
	}
}
