#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a
 * listint_t list
 * @head: a pointer to the addressof the head of the listint_t
 * @n: the integer for the new node to contain
 *
 * Return: if the function fails -NULL otherwise address
 * of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
