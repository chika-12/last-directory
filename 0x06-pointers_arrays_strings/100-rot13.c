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
	int i = 0;
	int num;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot3[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(i + str) != '\0')
	{
		for (num = 0; num < 52; num++)
		{
			if (*(i + str) == alph[num])
			{
				(*(i + str)) = rot3[num];
				break;
			}
		}
		i++;
	}
	return (str);
}
