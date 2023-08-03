#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary to convert
 * Return: tenary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int result;

	result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
		}
		else
			return (0);
	}
	return (result);
}
