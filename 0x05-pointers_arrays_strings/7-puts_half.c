#include<stdio.h>
/**
 * puts_half - prints half of a string
 * @str: parameter
 *
 * Return: Half string
 */
void puts_half(char *str)
{
	int len = 0;
	int num;

	for (num = 0; num <= str[num]; num++)
	{
		len += 1;
	}
	for (num = len / 2; num <= str[num]; num++)
	{
		printf("%c", str[num]);
	}
	printf("\n");
}

