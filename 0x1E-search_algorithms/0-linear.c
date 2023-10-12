#include "search_algos.h"

/**
 * linear_search - uses linier search  to find values
 * 
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * 
 * Return: 1 found, -1 not found 
 * 
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
