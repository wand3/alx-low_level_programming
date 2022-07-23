#include "main.h"

/**
 * _strpbrk - function that searches the string for any set of bytes
 * @s: the string input to be searched
 * @accept: The prefix pointer input to be counted
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
