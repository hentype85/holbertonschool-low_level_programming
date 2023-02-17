#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: integer input
 * Return: Absolute value of ab
 */
int _abs(int ab)
{
	if (ab < 0)
		return ab * -1;
	else
		return ab;	
}
