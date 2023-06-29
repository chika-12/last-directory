#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies source string to destination string
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: length of string
 *
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (src[num] != '\0')
		{
			dest[num] = src[num];
		}
		else
		{
			dest[num] = '\0';
			break;
		}
	}
	return (dest);
}
