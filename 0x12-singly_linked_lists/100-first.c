#include <stdio.h>

/*using constructors in c*/
void main_constructor(void)__attribute__((constructor));
/**
 * main_constructor - a function that prints a message
 * before main runs
 * Returns: Nothing
 */
void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
