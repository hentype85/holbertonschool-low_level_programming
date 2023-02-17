#include "main.h"
/*
 * _isalpha - a function that check for alphabetic character
 * @c: single letter input
 * Returns 1 if c is a letter, lowercase or uppercase
 * returns 0 otherwise
 */
int _isalpha(int c)
{
	if (('a' <= c && 'z' <= c) || ('A' <= c && 'Z'))
		return (1);
	else
		return (0);
}
