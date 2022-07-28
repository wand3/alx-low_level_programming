#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a fiunction that frees a 2D array of ints previously
 * created by malloc_grid function
 * @grid: an input @D array of integers to free
 * @height: height of grif
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
