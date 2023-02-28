#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: The string containing characters.
 */
void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[i])
	{
		i++;
		len++;
	}

	for (i = 0 ; i <= len ; i++)
	{
		if (i >= len / 2)
			_putchar(str[i]);
	}

	_putchar('\n');
}
