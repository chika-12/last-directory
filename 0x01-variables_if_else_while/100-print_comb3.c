#include <stdio.h>
/**
 * main - Entry point
 * prints combinations of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int num2;

	for (num = 48; num <= 57; num++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			if (num != num2 && num < num2)
			{
				putchar(num);
				putchar(num2);
				if (num != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
