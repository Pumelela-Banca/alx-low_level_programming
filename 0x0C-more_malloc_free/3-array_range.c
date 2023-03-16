#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum number in array
 * @max: maximum number in array
 *
 * Return: array of int.
 */

int *array_range(int min, int max)
{
	int *new;
	int ranges, s, sum;

	if (min > max)
		return (NULL);

	ranges = max - min;
	new = malloc(sizeof(new) * ranges);

	if (new == NULL)
		return (NULL);

	for (s = min; s < (max + 1); s++)
	{
		sum = s - min;
		new[sum] = s;
	}
	return (new);
}
