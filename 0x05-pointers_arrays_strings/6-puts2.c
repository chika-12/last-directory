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
	int num = 0;

	while (num >= 0)
	{
		if (str[num] == '\0')
		{
			_putchar(10);
			break;
		}
		if (num % 2 == 0)
		{
			_putchar(str[num]);
		}
		num++;
	}
}
