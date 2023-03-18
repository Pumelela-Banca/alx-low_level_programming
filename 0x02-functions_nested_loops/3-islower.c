#include "main.h"

/**
 * _islower - check the code.
 * @c: inter value 
 * Return:0 or 1.
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
