#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	p = malloc(sizeof(char) * (len1 + n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0 ; i <= len1 ; i++)
	{
		p[i] = s1[i];
	}

	for (i = 0 ; i < n ; i++)
	{
		p[i + len1] = s2[i];
	}

	i = 0;
	while (p[i]) i++;
	p[i] = '\0';

	return (p);
}
