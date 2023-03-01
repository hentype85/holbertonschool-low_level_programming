#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the string to be concatenated upon.
 * @src: source string to be appended to @dest.
 *
 * Return: pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	while (src[i])
	{
		dest[len++] = src[i++];
	}

	return (dest);
}
