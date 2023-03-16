#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: number of string to concatenate
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0, totalLen = 0;
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
		totalLen = len1 + len2;
	else
		totalLen = len1 + n;

	p = malloc(sizeof(char) * totalLen);

	len2 = 0;

	while (i < totalLen)
	{
		if (i <= len1)
			p[i] = s1[i];

		if (i >= len1)
		{
			p[i] = s2[len2];
			len2++;
		}

		i++;
	}

	p[i] = '\0';

	return (p);
}
