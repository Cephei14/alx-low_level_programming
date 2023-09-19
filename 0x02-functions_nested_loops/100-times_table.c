#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function that print a table
 * @n: size of the table
 * Return: nothting
 */

void print_times_table(int n)
{
	int i, j, t;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				t = i * j;
				if (j != n)
				{
					printf("%d, ", t);
				}
				else
					printf("%d\n", t);
			}
		}
	}
	else
		_putchar('\n');
}
