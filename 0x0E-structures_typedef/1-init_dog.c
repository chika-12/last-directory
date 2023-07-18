#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function initialization
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
