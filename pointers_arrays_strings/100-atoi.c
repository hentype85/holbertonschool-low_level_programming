#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	unsigned int res, i = 0, len = 0, sign = 1;

	while (s[i])
	{
		len++;
		i++;
	}

	for (i = 0 ; i < len ; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
			res = (res * 10) + (s[i] - '0');

		else if (res > 0)
			break;
	}
	return (res * sign);
}
