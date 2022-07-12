#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: An character input pointer
 * Returns: the length of @s *s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
