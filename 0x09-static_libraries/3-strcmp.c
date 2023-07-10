#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two string
 *  @s1: parameter
 *  @s2: parameter
 *
 *  Return: compares
 */
int _strcmp(char *s1, char *s2)
{
	int num;
	int comp;

	for (num = 0; s1[num] != '\0' || s2[num] != '\0'; num++)
	{
		if (s1[num] != s2[num])
		{
			comp = s1[num] - s2[num];
			break;
		}
		else
		{
			comp = 0;
		}
	}
	return (comp);
}
