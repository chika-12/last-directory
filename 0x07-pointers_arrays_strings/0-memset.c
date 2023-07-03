#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte.
 * @s: starting string of the address memory
 * @b: byte value
 * @n: number of value
 *
 * Return: byte value to be set
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (0);
}
