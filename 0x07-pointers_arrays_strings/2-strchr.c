#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strchr - prints the first instance of a specified character
 * @s: string
 * @c: pointer to the character to be returned
 * Return: result
 */
char *_strchr(char *s, char c)
{
	char *result;

	result = strchr(s, c);
	return (result);
}
