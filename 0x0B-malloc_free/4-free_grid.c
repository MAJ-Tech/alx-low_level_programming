#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D array created with dynamic allocation.
 * @grid: A 2D array to be freed.
 * @height: height of the grid.
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
