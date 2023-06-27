#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - copies src to dest 
 * @:dest: parameter
 * @src: parameter
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
