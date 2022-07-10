#include "main.h"
#include <stdio.h>
/**
 * main - prints the sum of even-valued Fibonacci < 4000000
 * Return: Always 0
 */
int main(void)
{
	float final_sum;
	unsigned long fib1 = 0, fib2 = 1, fibsum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			final_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", final_sum);

	return (0);
}
