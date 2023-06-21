#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int first_num;
	int second_num;
	int table;

	for (first_num = 0; first_num < 10; first_num++)
	{
		_putchar(48);
		for (second_num = 1; second_num < 10; second_num++)
		{
			table = first_num * second_num;
			_putchar(',');
			_putchar(' ');
			if (table <= 9)
			{
				_putchar(' ');
				_putchar(table + 48);
			}
			else
			{
				_putchar((table / 10) + 48);
				_putchar((table % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
