#include <stdio.h>

/**
 *
 * main - prints the number of arguments.
 * @argc: argument count
 * @argv: argument array of values
 *
 * Return: 0
 */
int main(int argc,char *argv[])
{
	int i;

	for(i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
