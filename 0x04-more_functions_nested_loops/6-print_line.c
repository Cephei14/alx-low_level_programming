#include "main.h"

/**
 * print_line - function that print positive line
 * @n: parameter
 *Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		 _putchar('\n');
	}
}
