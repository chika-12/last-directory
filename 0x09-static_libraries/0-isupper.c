#include <stdio.h>
#include "main.h"
/**
 * _isupper - Checks is alphabet is upper or lower case
 * @c: parameter
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
