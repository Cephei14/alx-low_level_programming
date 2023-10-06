#include "main.h"

/**
 * free_grid - function that free a 2d grid
 * @grid: the pointer that point to the grid
 * @height: grid's height
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
