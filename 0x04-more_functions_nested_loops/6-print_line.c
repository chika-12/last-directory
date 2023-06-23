#include <stdio.h>
#include "main.h"
/**
 * print_line - prints line
 * @n: variable for taking input
 * Return: 0
 */
void print_line(int n)
{
	int index;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (index = 1; index <= n; index++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
