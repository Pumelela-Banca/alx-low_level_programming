#include "main.h"

/**
 * sqr_count - count if number is natural square root
 *
 * @num: subtract from number until 0.
 * @count: number to subtract
 *
 * Return: int 1 for positive,  -1 for not natural sqrt.
 */

int sqrt_count(int num, int count)
{
        if (num <= 0)
        {
                return (0);
        }
        else
        {
                return (1 + sqrt_count(num - count, count + 2));
        }
}

/**
 * _sqrt_recursion - return the natural square root of a number
 *
 * @n: int to check the square root of
 *
 * Return: the natural square root or -1 if not present.
 */

int sqrt_count(int num, int count);

int _sqrt_recursion(int n)
{
	int i;

	if (n <= 0)
	{
		return (-1);
	}

	i = sqrt_count(n, 1);

	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
}
