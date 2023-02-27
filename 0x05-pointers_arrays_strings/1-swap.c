#include "main.h"

/**
 * void swap_int - swap two ints
 *
 * @a: integer one
 * @b: integer two
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
