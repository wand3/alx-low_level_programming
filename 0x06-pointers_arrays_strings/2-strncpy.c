#include "main.h"

/**
 * *_strncpy - fuction which copies inputted number of bytes 
 * from string into dest
 * @dest: destination pointer input
 * @src: src input functions parameter
 * @n: amount of byte used fron src
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
