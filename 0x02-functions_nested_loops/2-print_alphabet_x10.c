#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet 10x followed by newline
 * Return: Always nothingg
 */
void print_alphabet_x10(void)
{
	char letter;
	int num = 0;

	while (num++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	_putchar('\n');
	}
}
