#include "main.h"

/**
 * print_line - print  straight line
 *
 * @n: int number of underscores
 *
 * Return - void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');

	for (; n > 0; n--)
	{
		_putchar(95);
	}
	_putchar('\n');
}
