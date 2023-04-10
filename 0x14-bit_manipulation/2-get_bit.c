#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @index: index of bit
 * @n: number to llok at
 *
 * Return: int at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int *bin;
	int i;

	bin = malloc(sizeof(int) * 32);
	if (bin == NULL)
		return (-1);
	i = 0;
	while (n > 0)
	{
		bin[i] = n % 2;
		n /= 2;
		i++;
	}
	return (bin[index]);
}
