#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
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

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL || name == NULL || owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	name1 = strlen(name);
	owner1 = strlen(owner);
	ptr->name = malloc(sizeof(name1 + 1));
	ptr->owner = malloc(sizeof(owner1 + 1));
	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->name, name);
	ptr->age = age;
	strcpy(ptr->owner, owner);
	return (ptr);
}
