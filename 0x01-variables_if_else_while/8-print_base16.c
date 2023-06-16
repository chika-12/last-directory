#include <stdio.h>
/**
 * main - Entry point
 * prints hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char alph;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar(10);
	return (0);
}
