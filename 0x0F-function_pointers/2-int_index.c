#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - prints the array
 * @array: contains the array
 * @size: size of array
 * @cmp: function pointer
 * Return: array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

