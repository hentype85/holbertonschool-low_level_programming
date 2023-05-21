#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: is a pointer to the first element to the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: if value is not present in array or if array is NULL, return -1
 * if value is present in array then return the index
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
