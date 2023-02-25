#include "main.h"

/**
 * _isupper - check if upper case.
 *
 * @c: int value
 *
 * Return: 0 or  1.
 */

int _isupper(char c)
{
	int a;

	a = (int)(c);

	if ((int)(c) > 64 && (int)(c) < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
