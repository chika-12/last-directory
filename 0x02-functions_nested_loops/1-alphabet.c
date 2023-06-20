#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * lower case characters
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 97; alph <= 122; alph++)
	{
		_putchar(alph);
	}
	_putchar(10);
}
