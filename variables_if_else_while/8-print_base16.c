#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char l;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (l = 'A'; l <= 'F'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
