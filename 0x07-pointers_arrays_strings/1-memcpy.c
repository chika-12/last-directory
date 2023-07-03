#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy - copies bytes from one memory location to another
 * @dest: returns a the pointer to destination string
 * @src: source string this is the memory location to be copied
 * @n: holds the number of byte to be copied
 *
 * Return: pointer to destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
