#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minutes of jack bauer
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int num;
	int num2;

	for (num = 0; num <= 23; num++)
	{
		for (num2 = 0; num2 <= 59; num2++)
		{
			_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
			_putchar(':');
			_putchar((num2 / 10) + 48);
			_putchar((num2 % 10) + 48);
			_putchar(10);
		}
	}
}
