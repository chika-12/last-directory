#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: String to be printed between the strings
 * @n: Number of strings passed
 * Return strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (list == NULL)
		printf("nil\n");

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(list, const char*));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
