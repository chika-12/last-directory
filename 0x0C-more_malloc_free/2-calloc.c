#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: parameter
 * @size: parameter
 *
 * Return: Allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, nmemb * size);
	return (arr);
}
