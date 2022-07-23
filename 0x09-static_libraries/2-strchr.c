#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: char pointer input of string
 * @c: ocurrence of character
 *
 * Return: A pointer to firrst occurence of character c
 */
char * _strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);

		s++;
	}

	if (c == *s)
		return (s);

	return ('\0');
}
