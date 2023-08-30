#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - it prints the sum of the two diagonals
 *@a: pointer
 *@size: size
 *Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int x = 0, y = 0;

	for (i = 0; i <= (size * size); i = i +  size + 1)
	{
		x = x + a[i];
	}
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{
		y = y + a[j];
	}
	printf("%d, %d\n",x , y);
}
