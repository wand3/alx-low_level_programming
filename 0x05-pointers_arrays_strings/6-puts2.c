#include "main.h"

/**
 * puts2 - prints string starting with first xter, followed by a newline
 * @str: An character input pointer
 * Returns: nothing
 */
void puts2(char *str)
{
	int len = 0, index = 0;

	while (str[len] != '\0')
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
