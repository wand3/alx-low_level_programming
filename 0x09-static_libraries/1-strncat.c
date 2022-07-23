#include "main.h"

/**
 * *_strncat - fuction which concatenates two strings
 * @dest: destination pointer input
 * @src: src input functions parameter
 * @n: amount of byte used fron src
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
