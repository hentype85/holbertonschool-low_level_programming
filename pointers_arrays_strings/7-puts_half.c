#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: The string containing characters.
 */
void puts_half(char *str)
{
        int i, len;

        while (str[i])
        {
                i++;
                len++;
        }

        for (i = 0 ; i <= len ; i++)
        {
                _putchar(str[i + len / 2]);
        }

        _putchar('\n');
}
