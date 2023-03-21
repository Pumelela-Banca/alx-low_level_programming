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
		printf("Name: (nil)");
		return;
	}
	if (d->age < 0)
	{
		printf("(nil)");
		return;
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
		return;
	}
	else
	{
		printf("NAME: %s\nAge: %f\nOwner: %s\n", 
				d->name, d->age, d->owner);
	}
}
