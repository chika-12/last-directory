#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int x;
	int y;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				_putchar(' ');
			}
				for (j = 1; j < 2; j++)
				{
					_putchar(92);
					_putchar(10);
				}
		}
	}
}
