#include "main.h"
/**
 * _islower - print lowercase alphabet 10x followed by newline
 * @c: is the int that will use for the arguement of the function
 * Return: 1 if is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
