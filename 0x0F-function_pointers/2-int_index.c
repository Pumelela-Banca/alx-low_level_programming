#include "function_pointers.h"

/**
 * int_index- search for interger
 *
 * @size: number of elements in array
 * @array: numbers to loot from
 * @cmp: pointer to function to compare values
 *
 * Return: index where first value is found -1 
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int start, val;

	if (size <= 0 || (*cmp) == NULL)
	{
		return (-1);
	}

	for (start = 0; start < size; start++)
	{
		val = cmp(array[start]);
		if (val != 0)
			return start;
	}
	return (-1);
}
