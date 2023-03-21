#include <stdlib.h>
#include "function_pointers_h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		f(name);
	}
}
