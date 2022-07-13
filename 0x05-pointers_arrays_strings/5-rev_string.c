#include "main.h"

/**
 * rev_string - reverses string
 * @s: An character input pointer
 * Returns: nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char rev_s;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		rev_s = s[i];
		s[i++] = s[len];
		s[len] = rev_s;
	}
}
