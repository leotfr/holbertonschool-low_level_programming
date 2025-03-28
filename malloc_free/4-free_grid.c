#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid
 * @grid: The grid to be freed
 * @height: The height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int **ptr;
	int i;

	if (grid == NULL || height <= 0)
		return;

	ptr = grid;

	for (i = 0; i < height; i++)
	{
		free(*ptr);
		ptr++;
	}

	free(grid);
}
