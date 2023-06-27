#include <stdio.h>
#include "main.h"
/**
 * print_array - prints arrays
 * @a: parameter
 * @n: parameter
 *
 * Return: array
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
