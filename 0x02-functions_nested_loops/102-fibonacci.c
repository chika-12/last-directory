#include <stdio.h>
/**
 * main - prints the first 50 fibonacci sequence
 *
 * Return: fibbo
 */
int main(void)
{
	int n = 50;
	int num;
	long long int fib;
	long long int num2 = 0;
	long long int num3 = 1;

	for (num = 1; num <= 50; num++)
	{
		fib = num2 + num3;
		printf("%lld", fib);
		if (num != 50)
		{
			printf(", ");
		}
		num2 = num3;
		num3 = fib;
	}
	printf("\n");
}
