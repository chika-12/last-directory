#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * begining from the first character
 *
 * @str: parameter
 * Return: string
 */
void puts2(char *str)
{
	int num;

	for (num = 0; num <= str[num]; num += 1)
	{
		printf("%c", str[num]);
	}
	printf("\n");
}
