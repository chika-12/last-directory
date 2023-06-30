#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses string
 * @a: parameter
 * @n: parameter
 *
 * Return: Reversed string
 */
void reverse_array(int *a, int n)
{
	int num;
	int val;

	for (num = 0; num < n / 2; num++)
	{
		val = a[num];
		a[num] = a[n - 1 - num];
		a[n - 1 - num] = val;
	}
}
