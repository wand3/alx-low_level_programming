#include "main.h"

/**
 * clear_bit - gets the value of a bit at given index to 0
 * @n: the pointer to the bit
 * @index: the index to get the value at - indices start at 0
 *
 * Return: -1 if error occurs else the value of bit at index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
