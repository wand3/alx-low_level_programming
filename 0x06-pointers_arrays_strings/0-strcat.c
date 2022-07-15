#include "main.h"

/**
 * *_strncat - fuction which concatenates two strings
 * @dest: destination pointer input
 * @src: src input functions parameter
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (result);
}
