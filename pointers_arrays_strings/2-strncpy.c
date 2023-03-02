#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to copied from src
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i])
	{
		i++;
		len++;
	}

	i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}

	return (dest);
}
