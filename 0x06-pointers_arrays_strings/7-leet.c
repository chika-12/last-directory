#include <stdio.h>
#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: parameter
 * Return: Encoded string
 */
char *leet(char *str)
{
	int index;
	int i;
	int alph_low[5] = {97, 101, 111, 116, 108};
	int alph_upp[5] = {65, 69, 79, 84, 76};
	int num[5] = {52, 51, 48, 55, 49};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (index = 0; index < 5; index++)
		{
			if (str[i] == alph_low[index] || str[i] == alph_upp[index])
			{
				str[i] = num[index];
				break;
			}

		}
	}
	return (str);
}
