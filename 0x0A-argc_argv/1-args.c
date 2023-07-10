#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed to main
 *
 * @argc: parameter
 * @argv: parameter
 *
 * Return: argument count
 */
int main(int argc, char *argv[]__attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}
