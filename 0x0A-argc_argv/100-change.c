#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- prints the minimmum number of coins to make change
 * for an amount of money
 * @argc: the number of arguments is not exactly one
 * @argv: an array of pointers to the arguments
 *
 * Return: if the number of arguments is not exactly one 1
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc == 2)
	{
		cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (cents % 25 >= 0)
		{
			coins += cents / 25;
			cents = cents % 25;
		}
		if (cents % 10 >= 0)
		{
			coins += cents / 10;
			cents = cents % 10;
		}
		if (cents % 5 >= 0)
		{
			coins += cents / 5;
			cents = cents % 5;
		}
		if (cents % 2 >= 0)
		{
			coins += cents / 2;
			cents = cents % 2;
		}
		if (cents % 1 >= 0)
		{
			coins += cents;
		}
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
