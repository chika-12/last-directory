#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * prints a text to stdout
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "and the piece of art is useful\" - Dora kopar, 2015-10-19\n", 57);
       return (1);
}       
