#include "dog.h"
#include <stdio.h>

/**
 * print_dog- prints a struct dog
 *
 * @d: struct details
 * 
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\nAge: %f\nOWner: %s", 
				d->age, d->owner);
	}
	if (d->age < 0)
	{
		printf("Name: %s\nAge: (nil)\nOWner: %s",
                                d->name, d->owner);
	}
	if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %f\nOWner: (nil)",
                                d->name, d->age);
	}
	else
	{
		printf("NAME: %s\nAge: %f\nOwner: %s\n", 
				d->name, d->age, d->owner);
	}
}
