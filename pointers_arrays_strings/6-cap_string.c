#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: the pointer to dest
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char c[] = {
		',', ';', '.', '!', '?',
		'"', '(', ')', '{', ' ',
		'}', '\n', '\t'};

	while (s[i] != '\0')
	{
		for (j = 0 ; j < 13 ; j++)
		{
			if (c[j] == s[i - 1] && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}

		i++;
	}

	return (s);
}
