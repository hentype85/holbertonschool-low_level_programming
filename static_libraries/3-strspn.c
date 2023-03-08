#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 * Return: index
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			return (i);
	}

	return (i);
}
