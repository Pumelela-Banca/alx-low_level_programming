#include "main.h"

/**
 * _isdigit - See if int is 0 - 9
 *
 * @c: int value.
 *
 * Return: 1 for true and 0 false.
 */

int _isdigit(int c)
{
	int a;

	a = (int)(c);

	if (a > 47 && a < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
