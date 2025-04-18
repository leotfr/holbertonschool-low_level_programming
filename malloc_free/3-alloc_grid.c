#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid of integers initialized to 0
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the allocated grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int *ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		ptr = grid[i];
		for (j = 0; j < width; j++)
		{
			*ptr = 0;
			ptr++;
		}
	}

	return (grid);
}

