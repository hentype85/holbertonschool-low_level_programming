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

	while (format[i] && format[i] != NULL)
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
				s = va_arg(vlist, char*);
				s = (s == NULL) ? "(nil)" : s;
				printf("%s", s);
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
