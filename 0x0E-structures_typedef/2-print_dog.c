#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints information about dog
 * @d: parameter
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d == NULL)
		{
			printf("nill\n");
		}
		if (d->name == NULL)
		{
			printf("Name: (nill)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nill)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
