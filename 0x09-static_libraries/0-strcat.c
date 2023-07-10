#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: parameter
 * @src: parameter
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
