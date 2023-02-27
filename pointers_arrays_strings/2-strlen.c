#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: string
 * Return: Length.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
