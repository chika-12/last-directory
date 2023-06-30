#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: parameter
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i;
	int cap_char = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			cap_char = 1;
		}
		else if (str[i] >= 97 && str[i] <= 122 && cap_char)
		{
			if(str[i] == '\t')
			{
				str[i] = ' ';
			}
			else
			{
				str[i] = str[i] - 32;
				cap_char = 0;
			}
		}
		else if (str[i] >= 65 && str[i] <= 90  && !cap_char)
		{
			str[i] = str[i] + 32;
		}
		else
		{
			cap_char = 0;
		}

	}
	return (str);
}
