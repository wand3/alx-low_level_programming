#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings using at most
 * an inputted number of bytes
 * @s1: The string to be concatenated upon
 * @s2: the string to be concgatenated to s1
 * @n: the maximum number of bytes of s2 to concatenate to s1
 * Return: if concatenate fails - NULL
 * otherwise a pointer to a newly allocated space in memory containing
 * concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * (len + 1));

	if (concat_str == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat_str[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat_str[len++] = s2[index];
	
	concat_str[len] = '\0';

	return (concat_str);
}
