#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space
 *	in memory, which contains a copy of the string
 *	given as a parameter
 *@str: String to be copied
 *Return: if str is NULL or insufficient memory is available
 *	or return the pointer with the duplicated string
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *p;

	if (str  == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
		len++;
	}

	p = malloc(sizeof(char) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0 ; str[i] ; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
