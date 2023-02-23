#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 15 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char c[] = "FizzBuzz";

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i == 100)
			printf("%s", b);
		if (i % 15 == 0)
			printf("%s ", c);
		else if (i % 3 == 0)
			printf("%s ", a);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%i ", i);
	}

	printf("\n");

	return (0);
}
