#include "main.h"
#include <stdlib.h>
/**
 * free_grid - nom fonction
 *
 * Write a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 *
 * @grid: tableau 2D
 * @height: largeur tableau
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
