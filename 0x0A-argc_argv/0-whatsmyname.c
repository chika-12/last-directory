#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints its name
 * @argc: parameter
 * @argv: parameter
 *
 * Return: Argc and Argv
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc >= 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
