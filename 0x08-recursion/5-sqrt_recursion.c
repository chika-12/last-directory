#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - prints the sqrt root of a number
 * @n: parameter
 * @x: parameter
 *
 * Return: square root of n
 */
int recursion_help(int n, int x);

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (recursion_help(n, 1));
	}
}

/**
 * recursion_help - calculates the square root of n
 * @n: parameter
 * @x: parameter
 *
 * Return: squre root
 */
int recursion_help(int n, int x)
{
	if (x % (n / x) == 0)
	{
		if (x * (n / x) == n)
			return (x);
		else
			return (-1);
	}
	return (recursion_help(n, x + 1));
}
