#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that adds two positive integers
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the argument
 * Return: print error and return 1 if argument are not passed print 0
 */
int main(int argc, char *argv[])
{
	int result = 0, a, b;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		
		result += atoi(argv[a]);
	}

	printf("%d\n", result);

	return (0);
}
