#include "main.h"

/**
 * _strcpy - copies the string pointed
 * @dest: parameter
 * @src: parameter.
 *
 * Return: pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
