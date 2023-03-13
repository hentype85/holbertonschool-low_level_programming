#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins to make
 *change for an amount of money
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, n = 0, res = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0 ; i < 5 ; i++)
	{
		while (n >= coins[i])
		{
			res++;
			n -= coins[i];
		}
	}

	printf("%d\n", res);
	return (0);
}
