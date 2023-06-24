#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints triangles
 * @size: parameter
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int num;
	int var;
	int renum;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 1; num <= size; num++)
		{
			for (var = num; var < size; var++)
			{
				_putchar(' ');
			}
			for (renum = 1; renum <= num; renum++)
			{
				_putchar(35);
			}
			_putchar('\n');

		}
	}
}
