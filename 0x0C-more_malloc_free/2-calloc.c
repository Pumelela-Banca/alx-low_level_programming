#include "main.h"

/**
 * _calloc - allocate memory of array
 *
 * @nmemb: number of elements
 * size: bytes 
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if ( nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
