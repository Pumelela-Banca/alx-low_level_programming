#include "main.h"

/**
 * reverse_array - reverse array and using number of elements
 *
 * @a: array to be reversed
 * @n: number of elements in array
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int limit, bottom;

	char hold[1000];

	for (limit = 0; limit < n && a[limit] != '\0'; limit++)
	{
		hold[limit] = a[limit];
	}
	bottom = 0;
	while (limit > -1)
	{
		a[limit] = hold[bottom];
		limit--;
		bottom++;
	}
}
