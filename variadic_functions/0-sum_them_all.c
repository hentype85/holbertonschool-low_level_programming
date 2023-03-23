#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: arguments quantity
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(v, n);

	while (i < n)
	{
		sum += va_arg(v, int);
		i++;
	}

	va_end(v);

	return (sum);
}
