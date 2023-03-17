#include "main.h"

/**
 * _calloc - allocate memory of array
 *
 * @nmemb: number of elements
 * @size: bytes 
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if ( nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;

	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
