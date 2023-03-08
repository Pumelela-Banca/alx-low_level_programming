#include "main.h"

/**
 * _pow_recursion - return the power of a number
 *
 * @x: base number
 * @y: power of number
 *
 * Return: the power of x rased to the power y,
 * if y is lower than 0 return -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < -1)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
