#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: parameter
 * @b: parameter
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: parameter
 * @b: parameter
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two intergers
 * @a: parameter
 * @b: parameter
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - prints the dividend of two integers
 * @a: parameter
 * @b: parameter
 *
 * Return: dividen
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the modulus of two integers
 * @a: parameter
 * @b: parameter
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
