#include <stdio.h>
#include "main.h"
/**
 * string_toupper - converts lowercase to uppercase
 *
 * @s: parameter
 * Return: uppercase
 */
char *string_toupper(char *s)
{
	int num;

	for (num = 0; s[num] != '\0'; num++)
	{
		if (s[num] >= 97 && s[num] <= 122)
		{
			s[num] = s[num] - 32;
		}
	}
	return (s);
}
