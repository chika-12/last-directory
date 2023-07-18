#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints information about dog
 * @d: parameter
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (!(d->name))
		d->name = "(nill)";
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (!(d->owner))
		d->owner = "(nil)";
	else
		printf("Owner: %s\n", d->owner);
}
