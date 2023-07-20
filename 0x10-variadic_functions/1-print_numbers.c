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

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
