#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @index: bit location to be cleared
 * @n: int to change
 *
 * Return: new number with changed bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((n == NULL) || (index > 31))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
