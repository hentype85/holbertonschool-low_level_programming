#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list v;
	va_start(v, n);

	while (i < n)
	{
		printf("%d", va_arg(v, int));

		if (separator && i < n - 1)
			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(v);
}
