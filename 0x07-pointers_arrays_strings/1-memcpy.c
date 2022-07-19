#include "main.h"

/**
 * *_memcpy - funnction that fills memory with a constant byte
 * @dest: pointer char input of memory area to be filled
 * @src: constant byte char input to fill the memory area with
 * @n: unsigned int input number of bytes to be filled
 *
 * Return: pointer to memory area destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *begin = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (begin);
}
