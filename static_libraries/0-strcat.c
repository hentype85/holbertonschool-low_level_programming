#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i])
	{
		i++;
		len++;
	}

	i = 0;

	while (src[i] && i < n)
	{
		dest[len] = src[i];
		i++;
		len++;
	}

	return (dest);
}
