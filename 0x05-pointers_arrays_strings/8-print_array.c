#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that print some n elements of ints
 * @a: an array
 * @n: number to be printed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
