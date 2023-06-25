#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints times table
 *
 * @n: parameter
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int num;
	int num2;
	int value;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; num2++)
			{
				value = num * num2;
					_putchar(44);
					if (value <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(value + 48);
					}
					else if (value > 9 && value <= 99)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar((value / 10) + 48);
						_putchar((value % 10) + 48);
					}
					else
					{
						_putchar(' ');
						_putchar(((value / 100) % 10) + 48);
						_putchar(((value / 10) % 10) + 48);
						_putchar((value % 10) + 48);
				}
			}
			_putchar(10);
		}
	}
}
