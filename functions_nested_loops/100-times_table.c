#include "main.h"
/**
 * print_times_table - Prints a multiplication table up to param
 * @n: The number to be treated
 *
 * Return: Number matrix
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n >= 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar('0');

			for (j = 0 ; j <= n ; j++)
			{
				res = i * j;

				_putchar(',');
				_putchar(' ');

				if (n <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (n <= 99)
				{
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				else
				{
					_putchar((res / 100) % 10 + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar(res % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
