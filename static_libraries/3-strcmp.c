#include "main.h"

/**
 * _strcmp - Compares pointers to two strings
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 * Return: str1 - str2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0'))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
