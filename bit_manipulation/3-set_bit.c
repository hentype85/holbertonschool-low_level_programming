#include <stdio.h>

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer of a unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, -1 if it dont
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 64;
	unsigned int a;

	if (index >= bit)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
