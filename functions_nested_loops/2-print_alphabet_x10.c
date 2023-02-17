#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char abc;
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (abc = 'a' ; abc <= 'z' ; abc++)
		{
			_putchar(abc);
		}

		_putchar('\n');
	}
}
