#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number of which the sign will be printed
 * Return: 1 if greater than 0, 0 if == 0 ,-1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
