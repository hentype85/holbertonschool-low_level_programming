#include "main.h"

/**
 * check - function that counts how many divisors a number has
 * @n: number to evaluate
 * @c: counter to check divisibility
 * @i: counter to number of divisors
 *
 * Return: number of divisors of n
 */
int check(int n, int c, int i)
{
	if (c <= n)
	{
		if (n % c == 0)
			i++;
		c++;
		return (check(n, c, i));
	}

	return (i);
}

/**
 * is_prime_number - determines if a number is prime
 * @n: number to evaluate
 *
 * Return: 1 if the number is prime, 0 if is not
 */
int is_prime_number(int n)
{
	if ((check(n, 1, 0)) == 2)
		return (1);
	else
		return (0);
}
