#include "main.h"

/**
 * print_diagonal - print diagonal
 *
 * @n: number of lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int start, end, end2 , start2;

	end = n + 1;

	for (start = 1; start < end; start++)
	{
		if (n < 1)
		{
			_putchar('\n');
			break;
		}

		end2 = start + 1;

		for (start2 = 1; start2 < end2; start2++)
		{
			_putchar(32);
		}
		_putchar('\\');
		_putchar('\n');
	}
}
