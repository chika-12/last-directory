#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: parameter
 *
 * Return: returns allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *arr;

	if (b == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(b));

	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
