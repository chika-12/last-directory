#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Saves a copy of name and owner of dog
 * @name: Name of Dog
 * @owner: Owner of dog
 * @age: Age of dog
 * Return: saves copy of name and owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int name1 = 0;
	int owner1 = 0;
	int i;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL || name == NULL || owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		name1 += 1;
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		owner1 += 1;
	}
	ptr->name = malloc(sizeof(name1 + 1));
	ptr->owner = malloc(sizeof(owner1 + 1));
	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < name1; i++)
	{
		ptr->name[i] = name[i];
	}
	ptr->age = age;
	for (i = 0; i < owner1; i++)
	{
		ptr->owner[i] = owner[i];
	}
	return (ptr);
}
