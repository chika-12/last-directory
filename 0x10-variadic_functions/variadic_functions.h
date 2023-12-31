#ifndef VARIADIC_FUNCTION_H_
#define VARIADIC_FUNCTION_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * header - file containing header files
 * @c: putchar function
 * Return: 0
 */

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
