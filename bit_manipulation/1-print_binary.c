#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	char c;

	if (n > 0)
	{
		if (n >> 1) /* ((n / 2) > 0) */
			print_binary(n >> 1); /* print_binary(n / 2) */
		if (n & 1) /*if (n % 2) */
			c = '1';
		else
			c = '0';

		write(1, &c, 1);
	}
	else
		write(1, "0", 1);
}
