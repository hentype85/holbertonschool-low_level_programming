#include "main.h"
/**
 *compare - returns the power of number
 *@n: parameter number
 *@i: counter to compare multiplication
 *
 *Return: square root
 */

int compare(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (n < i * i)
		return (-1);

	return (compare(n, i + 1));
}
/**
 *_sqrt_recursion - returns the power of number
 *@n: parameter number
 *Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (compare(n, 1));
}
