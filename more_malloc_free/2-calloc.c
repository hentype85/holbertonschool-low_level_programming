#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: elements of array
 * @size: bytes of the array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, res;
	char *p;

	res = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(res);

	if (p == NULL)
		return (NULL);

	for (i = 0 ; i < res ; i++)
	{
		p[i] = 0;
	}

	return (p);
}
