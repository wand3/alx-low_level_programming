#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given as parameter
 * on each element of an array
 * @size: size of the array
 * @action: a pointer to the function to be used
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
