#include "main.h"

/**
 * *_memset - funnction that fills memory with a constant byte
 * @s: pointer char input of memory area to be filled
 * @b: constant byte char input to fill the memory area with
 * @n: unsigned int input number of bytes to be filled
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *begin = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (begin);
}
