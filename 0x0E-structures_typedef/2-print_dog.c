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
	if (d->name == NULL || d->name[0] == '\0')
	{
		printf("Name: (nil)\nAge: %f\nOwner: %s", 
				d->age, d->owner);
	}
	else if (d->age < 1)
	{
		printf("Name: %s\nAge: (nil)\nOwner: %s",
                                d->name, d->owner);
	}
	else if (d->owner == NULL || d->owner[0] == '\0')
	{
		printf("Name: %s\nAge: %f\nOwner: (nil)",
                                d->name, d->age);
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", 
				d->name, d->age, d->owner);
	}
}
