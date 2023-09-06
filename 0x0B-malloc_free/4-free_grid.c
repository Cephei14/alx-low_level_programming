#include "main.h"

/**
 *free_grid - function that empty 2D array
 *@grid: the grid
 *@height:height of the grid
 *Return: 0
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
