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
	else if (b > c)
	{
		largest = b;
	}
	else{
		largest = c;
	}
	return (largest);
}
