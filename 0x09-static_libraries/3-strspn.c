#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stddef.h>
/**
 * _strspn - calculate the length of the prefixed substring
 * @s: parameter
 * @accept: parameter
 *
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t length;

	length = strspn(s, accept);
	return (length);
}
