#include "main.h"
#include <stdio.h>

/**
 * flip_bits - number of bits you would need to flip to get from one number to another
 *
 * @n: int to flip
 * @m: next number to get to
 *
 * Return: number needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int m1[33], n1[33];
	int cc, count, ccc;

	for (cc = 31; cc > -1; cc--)
	{
		n1[cc] = ((n >> cc) & 1);
		m1[cc] = ((m >> cc) & 1);
	}
	count = 0;
	ccc = 0;
	while (ccc < 32)
	{
		if (m1[ccc] != n1[ccc])
			count++;
		ccc++;
	}
	return (count);
}
