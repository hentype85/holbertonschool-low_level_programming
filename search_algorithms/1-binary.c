#include "search_algos.h"

/**
 * binary_search -  searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 * Return: if value is not present in array or if array is NULL,
 * must return -1 if value is present in array return index
 */
int binary_search(int *array, size_t size, int value)
{
	int i = 0, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		/*set half index of right and left*/
		i = left + (right - left) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] > value)
			right = i - 1;
		if (array[i] < value)
			left = i + 1;
	}

	return (-1);
}
