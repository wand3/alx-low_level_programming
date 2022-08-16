#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - a function that frees a list
 * @h: a pointer listint_t structure
 * Return: the sixe of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *tmp;

	tmp = *h;
	while (tmp)
	{
		tmp = *h;
		tmp = tmp->next;
		free_list(tmp);
		counter++;
	}
	*h = NULL;

	return (counter);
}

/**
 * free_list - a function that frees a listint_t recursively
 * @head: a pointer to the listint_t structure
 * Return: Nothing
 */
void free_list(listint_t *head)
{
	listint_t *tmp;

	if (head)
	{
		tmp = head;
		tmp = tmp->next;
		free(tmp);
		free_list(tmp);
	}
	free(head);
}
