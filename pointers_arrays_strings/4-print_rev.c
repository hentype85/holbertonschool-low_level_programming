#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to tbe reserved.
 */
void print_rev(char *s)
{
	int i = 0, j = 0;

	while (s[i])
	{
		i++;
		j++;
	}

	for (i = j ; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
