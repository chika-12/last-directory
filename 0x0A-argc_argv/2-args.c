#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints array pointers of command line arguments
 *
 * @argc: parameter
 * @argv: parameter
 *
 * Return: (0);
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int count;

		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	return (0);
}
