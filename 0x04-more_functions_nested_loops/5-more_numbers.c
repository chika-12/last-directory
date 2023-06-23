#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints 10 times the number sequence
 * Return: 0;
 */
void more_numbers(void)
{
	int num;
	int line;

	for (line = 0; line <= 9; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
			_putchar((num / 10) + 48);
			}
			_putchar((num % 10) + 48);
		}
		_putchar(10);
	}
}

