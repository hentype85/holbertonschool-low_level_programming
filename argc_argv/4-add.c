#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - add arguments
 * @argc: argument count
 * @argv: argument matrix for values
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0, res = 0;

	for( i = 1 ; i < argc ; i++)
	{
		for(j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if ((argv[i][j] < 47) || (argv[i][j] > 57))
			{
				printf("Error\n");
				return(1);
			}
		}

		res += atoi(argv[i]);
	}

	printf("%d\n", res);
	return (0);
}
