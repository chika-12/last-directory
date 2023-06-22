#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for digits in a source code
 * @c: Acepts input
 *
 * Return: 0;
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
