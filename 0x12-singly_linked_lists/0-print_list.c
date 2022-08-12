#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all elememts of a linked list
 * @h: pointer to head of list
 * Return: number of nodes in list as size_t
 */
size_t print_list(const list_t *h)
{
        unsigned int nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
