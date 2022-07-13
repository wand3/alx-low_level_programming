#include "main.h"

/**
 * puts_half - prints half of  string, followed by a newline
 * @str: An character input pointer
 * Returns: nothing
 */
void puts_half(char *str)
{
	int len = 0, index, n;

	while (str[len] != '\0')
		len++;

	if ((len % 2) == 0)
		n  = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
