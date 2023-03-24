#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the string
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *p;
	va_list vlist;

	va_start(vlist, n);

	while (i < n)
	{
		p = va_arg(vlist, char *);

		if (p)
			printf("%s", p);
		else
			printf("(nil)");

		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}

		i++;
	}

	va_end(vlist);

	printf("\n");
}
