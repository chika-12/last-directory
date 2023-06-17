#include <stdio.h>
/**
 * main -Entry point
 * prints combinations of letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int num2;

	for (num = 0; num < 100; num++)
	{
		for (num2 = 0; num2 < 100; num2++)
		{
			if (num < num2)
			{
				putchar((num / 10) + 48);
				putchar((num % 10) + 48);
				putchar(' ');
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);
			
			if (num != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar(10);
	return (0);
}
