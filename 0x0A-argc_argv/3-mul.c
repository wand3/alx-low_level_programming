#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the argument
 * Return: print error and return 1 if argument are not two
 */

int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
}
