#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 *
 * Return: allocated memory for destination string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	size_t len1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	if (n >= strlen(s2))
		n = strlen(s2);
	arr = malloc(len1 + n + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	strcpy(arr, s1);
	strncat(arr, s2, n);
	arr[len1 + n] = '\0';
	return (arr);
}

