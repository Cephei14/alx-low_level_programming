#include "main.h"

/**
 *print_sign - function that print sign
 * @n: the test letter
 *Return: 1 if 'n' is positive or 0 if n is 0 or - if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
