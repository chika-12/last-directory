#include <stdio.h>
#include "main.h"
/**
 * rot13 - Encodes a string  using the rot13 algorithm
 * @str: parameter
 *
 * Return: rot13 encoded
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] = str[i] + 13;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' &&
			str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
		}
	}
	return (str);
}
