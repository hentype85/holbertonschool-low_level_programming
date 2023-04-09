#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int input
 * @index: index of the bit
 * Return: vallue of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int bit = 64;

	if (n == 0 && index < bit)
		return (0);

	while (i <= 32)
	{
		if (index == i)
			return (n & 1);

		n >>= 1; /* n /= 2; */

		i++;
	}

	return (-1);
}
