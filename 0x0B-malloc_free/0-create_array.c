#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - allocate memory
 * @size: parameter
 * @c: paremeter
 *
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int num;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (num = 0; num < size; num++)
		{
			arr[num] = c;
		}

		return (arr);
	}
}
