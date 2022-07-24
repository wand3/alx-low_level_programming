#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed in
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
