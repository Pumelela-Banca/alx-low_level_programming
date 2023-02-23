#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second interger
 * @c: third interger
 * Return: largets number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largetst = a;
	}
	else if (b >= a && a >= c)
	{
		largest = b;
	}
	else if (c >= b && b >= a)
	{
		largest = c;
	}
	else if (c == a && c == b && a == b)
	{
		largest = a;
	}

	return (largest);
}
