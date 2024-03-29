#include "main.h"
#include <stddef.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @index: bit location to be set
 * @n: int to change
 *
 * Return: new number with changed bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if ((n == NULL) || (index > 31))
		return (-1);
	*n |= (1 << index);
	return (1);
}
