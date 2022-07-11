#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0-14
 * followed by a newline
 * Return: Always 0
 */
void more_numbers(void)
{
	int num, times = 0;

	for (; times < 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
