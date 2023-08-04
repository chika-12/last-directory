#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: tenary number
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned long int numbit;
	unsigned long int help;

	numbit = (sizeof(unsigned long int) * 8);
	help = 1UL << (numbit - 1);

	for (i = 0; i < numbit; i++)
	{
		if ((n & help) != 0)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		help >>= 1;
	}
	_putchar('\n');
}
