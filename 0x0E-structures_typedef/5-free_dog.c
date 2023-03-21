#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 *
 * @d: struct to free memory from
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
