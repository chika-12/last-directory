#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - prints diagonal sum
 * @a: parameter
 * @size: parameter
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int num;
	int sum = 0;
	int result;

	for (num = 0; num < size; num++)
	{
	sum += a[num * size + num];
	}
	result = sum;

	sum = 0;

	for (num = 0; num < size; num++)
	{
	sum += a[num * size + (size - 1 - num)];
	}
	printf("%d, %d\n", result, sum);

}

