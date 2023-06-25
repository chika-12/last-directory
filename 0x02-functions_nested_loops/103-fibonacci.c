#include <stdio.h>
#include <math.h>
/**
 * main - prints the running sum of the fibonacci
 * sequence
 * Return: 0
 */
int main(void)
{
	double num;
	double num1 = 0;
	double num2 = 1;
	double fib;
	double running_sum = 0;

	for (num = 1; fib <= 4000000; num++)
	{
		fib = num1 + num2;
		if (fmod(fib, 2) == 0)
		{
			running_sum += fib;
		}
		num1 = num2;
		num2 = fib;
	}
	printf("%f\n", running_sum);
	return (0);
}
