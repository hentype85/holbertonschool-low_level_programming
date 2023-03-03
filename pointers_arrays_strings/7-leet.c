#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: The string to be encoded
 * Return: A pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char c[10] = { 'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char m[10] = { '4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (s[i] == c[j])
				s[i] = m[j];
		}

		i++;
	}
	return (s);
}
