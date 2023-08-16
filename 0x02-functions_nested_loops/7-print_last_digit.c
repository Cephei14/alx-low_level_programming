#include "main.h"

/**
 * print_last_digit - function that print last digit
 * @i: the tested number
 * Return: the last digit of number
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;

	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
