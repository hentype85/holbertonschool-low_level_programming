#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *op_add - add two parameters
 *@a: parameter
 *@b: parameter
 *Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - substract two parameters
 *@a: parameter
 *@b: parameter
 *Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies two parameters
 *@a: parameter
 *@b: parameter
 *Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divides two parameters
 *@a: parameter
 *@b: parameter
 *Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - get module of two parameters
 *@a: parameter
 *@b: parameter
 *Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
