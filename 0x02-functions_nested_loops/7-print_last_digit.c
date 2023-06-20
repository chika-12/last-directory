#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter
 * Return: Last digit of the number
 */
int print_last_digit(int n)
{
	int last_num = n % 10;

	if (n > 0)
	{
		_putchar(last_num + 48);
		return (last_num);
	}

	else if (n < 0)
	{
		_putchar(-last_num + 48);
		return (-last_num);
	}
	else
	{
		last_num = 0;
		_putchar(last_num + 48);
		return (last_num);
	}
}
