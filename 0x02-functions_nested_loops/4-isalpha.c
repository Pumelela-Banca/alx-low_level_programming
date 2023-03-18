#include<ctype.h>

/**
 * _isalpha - check the code
 *
 * @c- integer value
 *
 * Return:0 or 1.
 */

int _isalpha(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
