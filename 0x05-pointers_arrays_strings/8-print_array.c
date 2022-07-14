#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of array of ints, followed by a newline
 * @a: An character input pointer
 * @n: an integer input
 * Returns: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
