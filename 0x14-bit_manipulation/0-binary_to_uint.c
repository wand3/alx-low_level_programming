#include "main.h"

/**
 * binary_to_unit - a function that converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1
 *
 * Return: if b is NULL or contains char not 0 or 1 then 0
 * otherwise the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mul = 1, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			num += mul;
		mul *= 2;
		len--;
	}

	return (num);
}
