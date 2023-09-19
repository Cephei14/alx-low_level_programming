#include "main.h"

/**
 * print_times_table - function that print a table
 * @n: size of the table
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j, t;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				t = i * j;
				if (t < 10)
				{
					_putchar(t + '0');
				}
				else if (t >= 10 && t < 100)
				{
					_putchar((t / 10) + '0');
					_putchar((t % 10) + '0');
				} else
				{
					_putchar((t / 100) + '0');
					_putchar((t % 100) / 10 + '0');
					_putchar((t % 10) + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				} else
					_putchar('\n');
			}
		}
	} else
		_putchar('\n');
}
