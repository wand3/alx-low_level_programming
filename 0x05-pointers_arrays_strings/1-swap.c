#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first integer input pointer
 * @b: An integer input pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int xchg;

	xchg = *a;
	*a = *b;
	*b = xchg;
}
