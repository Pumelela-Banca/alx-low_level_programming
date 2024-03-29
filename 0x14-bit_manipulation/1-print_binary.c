#include "main.h"
#include  <strings.h>

/**
 * print_binary - print binary representation of number
 *
 * @n: number to turn into binary
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
