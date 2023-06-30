#include <stdio.h>
#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: parameter
 * Return: Encoded string
 */
char *leet(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		if (str[num] == 'a' || str[num] == 'A')
			str[num] = '4';
		else if (str[num] == 'e' || str[num] == 'E')
			str[num] = '3';
		else if (str[num] == 'o' || str[num] == 'O')
			str[num] = '0';
		else if (str[num] == 't' || str[num] == 'T')
			str[num] = '7';
		else if (str[num] == 'l' || str[num] == 'L')
			str[num] = '1';
	}
	return (str);
}
