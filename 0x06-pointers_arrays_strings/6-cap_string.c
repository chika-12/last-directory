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
		else if (islower(str[i]) && cap_char)
		{
			str[i] = toupper(str[i]);
			cap_char = 0;
		}
		else if (isupper(str[i]) && !cap_char)
		{
			str[i] = tolower(str[i]);
		}
		else
		{
			cap_char = 0;
		}
		if (isspace(str[i]) || ispunct(str[i]))
		{
			cap_char = 0;
			while (isspace(str[i + 1]) || ispunct(str[i + 1]))
			{
				i++;
			}
		}

	}
	return (str);
}
