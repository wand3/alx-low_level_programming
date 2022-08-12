#include "lists.h"

/**
 * list_len - a function that gets the number of nodes of a linked list
 * @h: pointer to head of list
 * Return: number of nodes in list as size_t
 */
size_t list_len(const list_t *h)
{
        unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
