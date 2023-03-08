#include "main.h"

/**
 * factorial - return a factorial of any given number
 *
 * @n: give factorial of this number
 *
 * Return: factorial or -1 if n is less than zero.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (-1);
}
