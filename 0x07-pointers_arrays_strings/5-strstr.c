#include "main.h"

/**
 * _strstr - function that locates a substring
 * @needle: the substring input to be searched in haystack
 * @haystack: The string to be searched
 *
 * Return: a pointer to the beginning of the located subsstring
 * or NULL if no substring is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	
	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i =0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
