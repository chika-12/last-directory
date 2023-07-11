#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - returns pointer to a newly allocated string
 * @str: parameter
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int len;
	char *arr;

	len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	arr = malloc(sizeof(len));
	strcpy(arr, str);
	return (arr);
}

