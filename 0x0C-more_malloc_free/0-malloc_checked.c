#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: amount of memory to be allocated
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
