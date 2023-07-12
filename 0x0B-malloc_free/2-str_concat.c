#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: parameter
 * @s2: parameter
 *
 * Return: pointer to s1
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	size_t total_len;
	char *arr;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	total_len = len1 + len2;

	arr = malloc(sizeof(char) * (total_len + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	strcpy(arr, s1);
	strcat(arr, s2);
	return (arr);
}

