#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed by src to dest
 * @dest: An destinstion input pointer
 * @src: an source to copy from input
 * Returns: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
