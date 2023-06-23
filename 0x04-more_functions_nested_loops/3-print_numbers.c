#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar(10);
}
