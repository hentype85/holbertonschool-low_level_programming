#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
		putchar(L);
	putchar('\n');
	return (0);
}
