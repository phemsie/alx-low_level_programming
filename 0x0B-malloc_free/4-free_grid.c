#include "main.h"

/**
 * free_grid - free a 2D array
 * @grid: block to be freed
 * @height: height of the array
 * Return: return void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
