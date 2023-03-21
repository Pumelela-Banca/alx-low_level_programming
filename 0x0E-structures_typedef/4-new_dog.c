#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	char *namep;
	char *ownp;
	
	ol = malloc(sizeof(dog_t));
	if (ol == NULL)
		return (NULL);

	namep = malloc(sizeof(name));
	if (namep == NULL)
		return (NULL);

	ownp = malloc(sizeof(owner));
	if (ownp == NULL)
		return (NULL);

	strcpy(namep, name);
	strcpy(ownp, owner);

	ol->name = namep;
	ol->age = age;
	ol->owner = ownp;
	return (ol);
}
