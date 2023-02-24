#include "main.h"
#include<ctype.h>

/**
 * _isupper - check if upper case.
 *
 * @c: int value
 *
 * Return: 0 or  1.
 */

int _isupper(int c)
{
	if (isupper(c) == 1)
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
