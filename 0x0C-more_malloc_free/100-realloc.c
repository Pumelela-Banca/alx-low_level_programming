#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer
 * @old_size: start size
 * @new_size: new size
 *
 * Return: Nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ptr = malloc(new_size);
		return (ptr);
	}
}
