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

	for (num = 0; num <= str[num]; num += 2)
	{
		if (str[num] == '\0')
		{
			_putchar(10);
		}
		printf("%c", str[num]);
	}
	printf("\n");
}
