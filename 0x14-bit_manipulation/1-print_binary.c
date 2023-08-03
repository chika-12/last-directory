#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: tenary number
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned int result;

	result = 0;
	if(!n)
		return (0);
	

