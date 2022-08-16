#include "lists.h"
#include <stdio.h>


/**
 * listint_len - fuction returns number of all the elements of a
 * linked listint_t list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes in the list_t list
 */
size_t listint_len(const listint_t *h);
{

	if (h)
	{
		return (1 + listint_len(h->next));
	}

	return (0);
}
