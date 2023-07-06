#include <stdio.h>
#include "main.h"
/**
 * _strlen - calculates the length of the string
 * @s: parameter
 *
 * Return: legnth of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')

		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * comparator - compares the character of a string
 * @s: pointer to string
 * @n1: small iterator
 * @n2: large iterator
 *
 * Return: 1 or 0
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks for palindrome
 * @s: parameter
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen(s) - 1));
}
