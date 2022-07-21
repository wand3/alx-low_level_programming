#include "main.h"

/**
 * _pow_recursion - function that returns value of x raised to the power of y
 * @x: value
 * @y: value to be raised on x
 * Return: -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0 || x == 1)
		return (1);
	else if (y == 1)
		return (x);

	return (x *= _pow_recursion(x, y - 1));
}
