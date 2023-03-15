#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - A function allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: pointer to the allocated memory or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(c);

	if (p == NULL)
	{
		exit(98);/*malloc fails*/
	}

	return (p);
}
