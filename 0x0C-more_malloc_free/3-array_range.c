#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - A function that creates an array of integers
 * @min: parameter
 * @max: parameter
 *
 * Return: Allocated memory
 */
int *array_range(int min, int max)
{
	int *arr;
	int index;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * max + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (index = min; index <= max; index++)
	{
		arr[index] = index;
	}
	return (arr);
}
