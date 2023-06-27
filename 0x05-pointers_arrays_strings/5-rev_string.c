#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - prints string in reverse
 *
 * @s: parameter
 * Return: Reversed string
 */
void rev_string(char *s)
{
	int num;
	int len;

	len = strlen(s);
	for (num = len - 1; num >= 0; num--)
	{
		printf("%c", s[num]);
	}
	printf("\n");
}
