#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int num;
	char alph;

	for (num = 0; num < 10; num++)
	{

		for (alph = 97; alph <= 122; alph++)
		{
			_putchar(alph);
		}
		_putchar(10);
	}
}
