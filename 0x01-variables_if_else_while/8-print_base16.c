#include <stdio.h>
/**
 * main - Entry point
 * prints in base16 0-9
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
