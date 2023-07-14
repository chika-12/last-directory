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
	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (index = 0; min <= max; min++, index++)
	{
		arr[index] = min;
	}
	return (arr);
}
