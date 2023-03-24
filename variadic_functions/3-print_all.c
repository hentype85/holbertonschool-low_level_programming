#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, flag = 0;
	char *s;
	va_list vlist;

	va_start(vlist, format);

	while (format != NULL && format[i])
	{
		flag = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vlist, int));
				break;
			case 'i':
				printf("%i", va_arg(vlist, int));
				break;
			case 'f':
				printf("%f", va_arg(vlist, double));
				break;
			case 's':
				printf("%s", va_arg(vlist, char*));
				break;
			default:
				flag = 1;
				break;
		}

		i++;
		if (format[i] && flag == 0)
			printf(", ");
	}

	va_end(vlist);
	printf("\n");
}
