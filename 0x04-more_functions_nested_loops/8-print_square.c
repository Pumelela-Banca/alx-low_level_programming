#include "main.h"

/**
 * print_square -  print square of ##
 *
 * @size: int for size
 *
 * Return: void
 */

void print_square(int size)
{
	int start, start2;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	if (size == 1)
	{
		_putchar(35);
		_putchar('\n');
		return;
	}

	for (start = 0; start < size; start++)
	{
		for (start2 = 0; start2 < size; start2++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
