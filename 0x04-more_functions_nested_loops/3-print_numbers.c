#include "main.h"

/**
 * print_numbers - prints numbers from 0-9 followed by \n
 *
 * Returns: nothing
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);
	_putchar('\n');
}
