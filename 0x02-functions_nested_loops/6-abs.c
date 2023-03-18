#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @c: int
 *
 * Return: absolute vaue.
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	else if (c == 0)
	{
		c = c;
	}
	else
	{
		return (c);
	}
	return (c);
}
