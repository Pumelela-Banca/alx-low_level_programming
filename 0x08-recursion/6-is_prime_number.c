#include "main.h"

/**
 * prm- multipply all nums below count.
 *
 * @count: number to compare multiples
 * @down: come down from num to up
 *
 * Return: 1 for prime 0 for false.
 */

int prm(int count, int down)
{
	if (down == 1)
	{
		return (0);
	}
	else if (count % down == 0)
	{
		return (1);
	}
	else
	{
		return (prm(count, down - 1));
	}
}

/**
 * is_prime_number - ckeck if number is prime
 *
 * @n: integer to look at
 *
 * Return: 1 or 0 for true and false
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
	{
		return (0);
	}
	return (prm(n, n - 1));
}
