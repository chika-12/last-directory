#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse
 *
 * @s: parameter
 *
 * Return: reversed string
 */
void print_rev(char *s)
{
	int len;
	int num;

	len = strlen(s);
	for (num = len; num >= 0; num--)
	{
		printf("%c", s[num]);
	}
	printf("\n");
}
