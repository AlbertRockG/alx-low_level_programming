#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - It returns a pointer
 *             to 2D array of integers.
 * @width: The number of column of 2D array.
 * @height: The number of row of 2D array.
 *
 * Return: NULL, if not ok.
 *         NULL, if width or height is 0 or negative.
 *         A pointer to 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **my2D;
	int row, col;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	my2D = malloc(width * height * sizeof(int));

	if (my2D == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		my2D[row] = malloc(sizeof(int) * width);

		if (my2D[row] == NULL)
		{
			for (; row >= 0; row--)
			{
				free(my2D[row]);
			}
			free(my2D);

			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
			my2D[row][col] = 0;
	}

	return (my2D);
}
