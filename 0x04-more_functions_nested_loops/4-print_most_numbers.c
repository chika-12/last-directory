#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints numbers skipping 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
