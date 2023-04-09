#include "main.h"

/**
 * binary_to_uint - convert binary to int
 *
 * @b: pointer to a string of ones and 0
 *
 * Return: number in int form
 */

unsigned int binary_to_uint(const char *b)
{
	int i, sum, idx;

	if (b[0] == '\0')
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] > 49 || b[i] < 48)
			return (0);
	}
	sum = 0;
	idx = 0;
	while (i > -1)
	{
		if (b[idx] == 49)
		{
			sum += myPow(2, i);
		}
		idx++;
		i--;
	}
	return (sum / 2);
}

/**
 * myPow - calculate the power to a number
 *
 * @x: base num
 * @n: power
 *
 * Return: result of power
 */

int myPow(int x, int n)
{
	int i; /* Variable used in loop counter */
	int number = 1;

	for (i = 0; i < n; i++)
		number *= x;
	return (number);
}
