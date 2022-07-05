#include <stdio.h>
/**
 * main - Entry point
 * prints all singe digit numbers of base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;


	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
