#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combinations of a single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
