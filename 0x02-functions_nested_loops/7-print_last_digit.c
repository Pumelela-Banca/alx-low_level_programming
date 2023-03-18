#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @a: integer
 *
 * Return: value of int.
 */

int print_last_digit(int a)
{
	int last;

	if (a < 0)
		a = a * -1;
	if (a  < -2147)
		a = a % 1000;

	last  = a % 10;
	_putchar('0' + last);
	return (last);
}
