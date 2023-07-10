#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 *
 * @src: source string
 * @n: number of bytes
 *
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
