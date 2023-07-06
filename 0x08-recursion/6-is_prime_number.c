#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - prints a prime number
 * @n: parameter
 * @x: parameter
 *
 * Return: 1 or 0:
 */
int prime(int n, int x);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}

/**
 * prime - checks for prime numbers
 * @x: itrator
 * @n: parameter
 *
 * Return: Prime numbers
 */
int prime(int n, int x)
{
	if (n % x == 0)
	{
		if (x == n)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + prime(n, x + 1));
}
