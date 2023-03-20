#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog traits
 *
 * @name: animal name
 * @age: animal age
 * @owner: animal owner
 *
 * Description: Dog characteristics, age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
