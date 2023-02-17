#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0;i <= 25; i++)
	{
		_putchar(a[i]);
	}
}
