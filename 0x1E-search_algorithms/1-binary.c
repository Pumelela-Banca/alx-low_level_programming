#include "search_algos.h"
/**
 * binary_search - binary search
 *
 * @array: array to search
 * @size: size of array
 * @value: value to find
 *
 * Return: num found, -1 not
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, l = 0;

	if (!array)
		return (-1);
	while (i <= j)
	{
		printf("Searching in array: ");
		for (l = i; l < j; l++)
			printf("%d, ", array[l]);
		printf("%d\n", array[l]);
		l = (i + j) / 2;
		if (array[l] < value)
			i = l + 1;
		else if (array[l] > value)
			j = l - 1;
		else
			return (l);
	}
	return (-1);
}
