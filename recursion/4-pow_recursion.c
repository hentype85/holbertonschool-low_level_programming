#include "main.h"

/**
 *_pow_recursion - returns value of x raised of the power of y
 *@x: base
 *@y: exp
 *Return: number raised to the power
 */
int _pow_recursion(int x, int y)
{
	if (y < '\0')
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
