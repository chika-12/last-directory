#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints variable numbers
 * @separator: String to be printed between numbers
 * @n: Number of integers passed
 * Return: integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
		return;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, const unsigned int));
		if (i != (n - 1))
		{
			printf("%s ", separator);
		}
	}
	va_end(list);
	printf("\n");
}
