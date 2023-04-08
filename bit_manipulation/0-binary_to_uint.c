#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: binary number
 * Return: an unsigned int
 */
/* Converts a string of 0 and 1 characters into an unsigned integer */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = num << 1; /*num *= 2*/
		num += b[i] - '0';

		i++;
	}

	return (num);
}
