#include "main.h"

/**
 * _print_rev_recursion - function prints reverse string followed by a new line
 * @s: parameter pointer
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
