#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: string to be reserved.
 */
void rev_string(char *s)
{
	int i = 0, len = 0, half = 0;
	char temp;

	while (s[i])
	{
		i++;
		len++;
	}

	half = j / 2;

	for (i = j - 1; i >= half; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
