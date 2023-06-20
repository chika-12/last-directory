#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign in respect
 * to the type of interger negative or positive
 * @n: parameter
 * for accepting user input
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
