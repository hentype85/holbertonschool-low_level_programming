#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer of a unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, -1 if it dont
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int bit = 64;

	if (index >= bit)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
