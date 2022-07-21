#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(char *s, int len, int index);

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: string input to check its length
 * Return: the length of the string s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * check_palindrome - function that checks if string is a palindrome
 * @s: the string to be checked
 * @len: the length of the string
 * @index: the index of string to be checked
 *
 * Return: 1 if string is a palindrone else 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	else if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: the string to be checked
 *
 * Return: 1 if palindrome then 0 if string is not a palindrome
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = _strlen_recursion(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
