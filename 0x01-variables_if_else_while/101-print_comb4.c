#include <stdio.h>
/**
 * main - Entry point
 * print triple combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = 48; num <= 57; num++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			for (num3 = 50; num3 <= 57; num3++)
			{
				if (num < num2 && num2 < num3)
				{
					putchar(num);
					putchar(num2);
					putchar(num3);
					if (num != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);


}
