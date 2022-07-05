#include <stdio.h>
/**
 * main - Entry point
 * prints alphabets in lowercase using putchar only followed by newline
 * Return: Always 0 (success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	
	return (0);
}
