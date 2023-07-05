#include<unistd.h>

/**
 * main - prints c to stdout
 * @c: parameter
 *
 * Return: c 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
