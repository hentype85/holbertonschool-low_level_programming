#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			if (h <= 9)
				printf("0");

			printf("%i", h);
			printf(":");

			if (m <= 9)
				printf("0");

			printf("%i", m);
			printf('\n');
		}
	}
}
