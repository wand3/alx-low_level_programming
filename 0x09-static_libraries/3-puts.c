#include "main.h"

/**
 * _puts - prints a string, followed by a newline
 * @str: An character input pointer
 * Returns: nothing
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
