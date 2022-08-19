#include "main.h"

/**
 * print_binary - a function that prints a binary number without % or /
 * @n: the number to be printed
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
