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

	for (start = 0; start < size; start++)
	{
		if (size < 1)
		{
			_putchar('\n');
			break;
		}

		for (start2 = 2; start2 < size; start2++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
