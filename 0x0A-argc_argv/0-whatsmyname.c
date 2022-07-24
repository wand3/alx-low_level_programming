#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by as new line
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
