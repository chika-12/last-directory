#include <stdio.h>
/**
 * main - prints multiples of 3 and 5
 * in 1024
 *
 * Return: Multiples of 3 and 5 in 1024
 */
int main(void)
{
	int rundown;
	int multiple = 0;

	for (rundown = 1024; rundown >= 1; rundown--)
	{
		if (rundown % 3 == 0 || rundown % 5 == 0)
		{
			multiple += rundown;
		}
	}
	printf("%d\n", multiple);
	return (0);
}
