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

	if (a > b && b > c)
	{
		largetst = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > b && b > a)
	{
		largest = c;
	}
	else if (a == b && c > a)
	{
		largest = c;
	}
	else if (c == b && a > b)
	{
		largest = a;
	}
	else if (a == c && b > a)
	{
		largest = b;
	}
	else if (a == b && c < a)
	{
		largest = b;
	}
	else if (c == a && b < a)
	{
		largest = a;
	}
	else if (c == b && a < b)
	{
		largest = c;
	}
	else
	{
		largest = a;
	}

	return (largest);
}
