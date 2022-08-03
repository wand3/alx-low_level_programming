#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees a dog structure
 * @d: pointer of the struct to be freed
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
