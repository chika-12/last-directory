#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the addition of two numbers from
 * command line
 * @argc: Argument count
 * @argv: Argument velocity
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (-1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
}

