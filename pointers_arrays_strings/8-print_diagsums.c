#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of matrix
 * @a: pointer to the matrix to be summed
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum1 = 0, sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
				sum1 += a[(i * size) + j];
			if (i + j == size - 1)
				sum2 += a[(i * size) + j];
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
