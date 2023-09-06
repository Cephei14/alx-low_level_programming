#include "main.h"

/**
 *alloc_grid - function that makes a grid
 *@width:the width of the grid
 *@height:the height of the grid
 *Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **e;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	e = malloc(sizeof(int *) * height);
	if (e == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		e[a] = malloc(sizeof(int) * width);
		if (e[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(e[a]);
			}
			free(e);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			e[a][b] = 0;
	}
	return (e);
}
