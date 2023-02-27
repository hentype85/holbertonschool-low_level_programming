#include "main.h"
/**
 * swap_int - swaps the values of two integers
 */
void swap_int(int *a, int *b)
{
	int pa, pb;

	pa = *a;
	pb = *b;

	*a = pb;
	*b = pa;
}
