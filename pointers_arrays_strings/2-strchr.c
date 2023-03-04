#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: parameter
 * @c: parameter
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);

		i++;
	}

	return (NULL);
}
