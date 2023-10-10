#include "main.h"

/**
 * array_range - function that create int array
 * @min: lowest value in the array
 * @max: highest value in the array
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int *p, i, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	p = (int *)malloc(sizeof(int) * s);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= s; ++i)
	{
		p[i] = min + i;
	}
	return (p);
}
