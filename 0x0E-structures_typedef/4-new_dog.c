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

	if (name == NULL || name[0] == '\0' || owner[0] == '\0' 
			|| age < 1 || owner == NULL)
		return (NULL);
	
	ol = malloc(sizeof(dog_t));
	if (ol == NULL)
	{
		free(ol);
		return (NULL);
	}

	namep = malloc(sizeof(name));
	if (namep == NULL)
	{
		free(namep);
		return (NULL);
	}

	ownp = malloc(sizeof(owner));
	if (ownp == NULL)
	{
		free(ownp);
		return (NULL);
	}

	strcpy(namep, name);
	strcpy(ownp, owner);

	ol->name = namep;
	ol->age = age;
	ol->owner = ownp;
	return (ol);
}
