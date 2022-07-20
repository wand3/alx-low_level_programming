#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrx
 * @a: a square matrix of integers
 * @size: an input integer with size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, max = size * size, sum = 0, sum1 = 0;

	for (i = 0; i < max; i += size + 1)
		sum += a[i];

	for (i = size - 1; i < max - 1; i += size - 1)
		sum1 += a[i];

	printf("%d, %d\n", sum, sum1);
}
