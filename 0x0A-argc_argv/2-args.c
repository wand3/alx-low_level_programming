#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the arguments passed in
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg = 0;

	for (; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
