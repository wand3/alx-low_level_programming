#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function returns sum of all its parameters
 * @n: the number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum of
 * Return: 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int index, sum = 0;

	va_start(ap, n);

	for (index = 0; index < n; index++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
