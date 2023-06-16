#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * prints last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit = n % -10;
	}
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greter than 5\n", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than ", n, last_digit);
		printf("6 and not 0\n");
	}
}
