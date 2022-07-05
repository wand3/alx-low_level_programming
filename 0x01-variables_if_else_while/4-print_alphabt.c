#include <stdio.h>
/**
 * main - Entry point
 * alphabets in lowercase without 'q','e' using putchar only followed + '\n'
 * Return: Always 0 (success)
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');

	return (0);
}
