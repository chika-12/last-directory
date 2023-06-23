#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square
 * @size: parameter
 * Return: 0
 */
void print_square(int size)
{
	int colum;
	int row;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (colum = 1; colum <= size; colum++)
		{
			for (row = 1; row <= size; row++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
