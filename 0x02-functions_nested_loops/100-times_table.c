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
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 1; j <= n; j++)
			{
				t = i * j;
				if (t < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
				}
				else if (t >= 10 && t < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((t / 10) + '0');
					_putchar((t % 10) + '0');
				} else
				{
					_putchar(' ');
					_putchar((t / 100) + '0');
					_putchar((t % 100) / 10 + '0');
					_putchar((t % 10) + '0');
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
