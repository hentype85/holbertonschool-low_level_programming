#include "3-calc.h"
#include <stdlib.h>

/**
 * main - get arguments
 * @argc: count arguments
 * @argv: vector arguments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));

	return (0);
}
