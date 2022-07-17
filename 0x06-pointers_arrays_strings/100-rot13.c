#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @s: an input string to encode rot13
 * Return: an encoded string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') ||
					(s[i] >= 'A' && <= 'Z'))
				s[i] += 13;
			else
				s[i] -= 13;

			i++;
		}

		i++;
	}
	return (s);
}
