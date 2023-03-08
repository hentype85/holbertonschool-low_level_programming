#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destiny
 * @src: source
 * @n: number of bytes from memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
