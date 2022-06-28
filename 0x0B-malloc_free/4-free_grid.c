#include "main.h"
#include <stdlib.h>

/**
 * free_grid - It frees a 2D grid previously created by alloc_grid.
 * @grid: The 2D array.
 * @height: The number of row of the grid.
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}

	free(grid);
}
