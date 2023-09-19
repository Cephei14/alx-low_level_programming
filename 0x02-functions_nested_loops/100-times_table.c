#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function that print a table
 * @n: size of the table
 * Return: nothting
 */

void print_times_table(int n)
{
	int i, j, t, x, y, xl, xr;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				t = i * j;
				if (n <= 3)
				{
					_putchar(t + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
					else
						_putchar('\n');
				}
				else
				{
					x = t / 10;
					y = t % 10;
					if (x != 0)
					{
						if (x < 10)
						{
							_putchar(x + '0');
							_putchar(y + '0');
						}
						else
						{
							xl = x / 10;
							xr = x % 10;
							_putchar(xl + '0');
							_putchar(xr + '0');
							_putchar(y + '0');
						}
					}
					else
						_putchar(y + '0');
					if (j != n)
					{
						_putchar(',');
                                                _putchar(' ');
                                        }
                                        else
                                                _putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
