#include <stdio.h>
/**
 * main - Entry point
 * prints alphabets in lowercase uppercase using putchar only followed + '\n'
 * Return: Always 0 (success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (low = 'A'; low <= 'Z'; low++)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);
}
