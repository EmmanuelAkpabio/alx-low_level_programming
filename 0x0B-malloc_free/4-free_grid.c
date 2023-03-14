#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensioanl grid
 * @grid: the 2D array
 * @height: the number of rows
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
