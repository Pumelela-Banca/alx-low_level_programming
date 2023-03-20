#include "dog.h"
#include <stdlib.h>

/**
 * init_dog- Initialize dog
 *
 * @struct dog d: struct details
 * @name: animal name
 * @age: age of dog
 * @owner: animal owner
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d-> name = name;
	d-> age = age;
	d-> owner = owner;
}
