#include "function_pointers.h"

/**
 * array_iterator- execute function on every given input of array
 *
 * @array: data to use
 * @size: size of array
 * @action: instructions to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int start;

	if (action == NULL || array == NULL)
		return;

	for (start = 0; start < size; start++)
	{
		action(array[start]);
	}
}
