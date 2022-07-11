#include "main.h"

/**
 * print_line - prints a diagonal line using \ character
 * @n: The number of diagonals to be printed
 */
void print_diagonal(int n)
{
	int len, dia;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (dia = 0; dia < len; dia++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
