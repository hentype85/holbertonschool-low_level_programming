#include "main.h"
/*
 * _isupper: function that checks for uppercase
 * @c: input
 * Return : 1 if c uppercase. 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
