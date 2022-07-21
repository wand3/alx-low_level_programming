#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of an inputted number
 * @num: the number to find square root of
 * @root: the root to be tested
 * Return: the number if it has a natural sqrt else -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	else if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - function returns natural square root of a number
 * @n: the number
 *
 * Return: -1 if n does not have a natural square
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
