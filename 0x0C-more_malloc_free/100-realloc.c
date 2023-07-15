#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Reallocates previously allocated memory
 * @ptr: previously allocated memory
 * @old_size: old size of previously allocated memory
 * @new_size: size of the newly allocated memory
 *
 * Return: Newly allocate memory if new_size is not NULL
 * and new_size != old_size.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (old_size < new_size)
	{
		copy = old_size;
	}
	else
	{
		copy = new_size;
	}
	memcpy(new_ptr, ptr, copy);
	free(ptr);
	return (new_ptr);
}
