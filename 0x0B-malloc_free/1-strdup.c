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

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	arr = malloc(sizeof(len));
	if (arr == NULL)
	{
		return (NULL);
	}

	strcpy(arr, str);
	return (arr);
}

