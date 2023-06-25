#include <stdio.h>
#include <math.h>
/**
 * main - prints the running sum of the fibonacci
 * sequence
 * Return: 0
 */
int main(void)
{
	long int num;
	long int num1 = 0;
	long int num2 = 1;
	long int fib;
	long int running_sum = 0;

	for (num = 0; fib <= 4000000; num++)
	{
		fib = num1 + num2;
		if (fib % 2 == 0)
		{
			running_sum += fib;
		}
		num1 = num2;
		num2 = fib;
	}
	printf("%ld\n", running_sum);
	return (0);
}
