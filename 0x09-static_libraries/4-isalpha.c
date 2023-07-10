#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 * checks for alphabet
 * @c: parameter
 * for accepting user input
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
