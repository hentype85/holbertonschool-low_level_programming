#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: The string to be concatenated
 * @s2: The string to be concatenated to s1
 * Return: if concatenation fail return NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, len = 0;

	while (s1[len] || s2[len])
		len++;

	p = malloc(sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] ; i++)
	{
		p[j] = s1[i];
		j++;
	}

	for (i = 0; s2[i] ; i++)
	{
		p[j] = s2[i];
		j++;
	}

	return (p);
}
