#include<stdio.h>

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

	last  = a % 10;
	printf("%d", last);
	return (last);
}
