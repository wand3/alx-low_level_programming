#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - fuction prints all the elements of a listint_t list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h);
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
