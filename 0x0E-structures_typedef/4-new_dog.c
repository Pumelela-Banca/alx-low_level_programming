#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name
 * @age: age
 * @owner: owner name
 *
 * Return: Struct for dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ol;
	
	ol = malloc(sizeof(dog_t));
	if (ol == NULL)
		return (NULL);

	ol->name = name;
	ol->age = age;
	ol->owner = owner;
	return (ol);
}
