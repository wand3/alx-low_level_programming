#include "main.h"

/**
 * _puts_recursion - function prints a string followed by a new line
 * @s: parameter pointer
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
