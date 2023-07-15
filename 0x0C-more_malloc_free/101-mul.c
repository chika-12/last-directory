#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * multiply_numbers - multiplies two integers
 * @num1: parameter
 * @num2: parameter
 * Return: mul
 */
int multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * validate_input - validates the input
 * @argc: parameter
 * @argv: parameter
 * @num1: parameter
 * @num2: parameter
 * Return: valdated input
 */
void validate_input(int argc, char *argv[], int *num1, int *num2)
{
	char *endptr;

	if (argc != 3)
	{
		exit(98);
	}
	*num1 = strtol(argv[1], &endptr, 10);
	*num2 = strtol(argv[2], &endptr, 10);
	if (!isdigit(*argv[1]) || !isdigit(*argv[2]) || *endptr != '\0')
	{
		exit(98);
	}
}
/**
 * main - Executes the function
 * @argc: parameter
 * @argv: parameter
 * Return: mul
 */
int main(int argc, char *argv[])
{

	int num1, num2;
	int mul;

	if (argc != 3)
	{
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = multiply_numbers(num1, num2);
	printf("%d\n", mul);

	return (0);
}
