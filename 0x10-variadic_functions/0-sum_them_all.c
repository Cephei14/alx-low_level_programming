#include "variadic_functions.h"

/**
 * sum_them_all - function that perform addition
 * @n: number of arguments
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int s;

	if (n == 0)
		return (0);
	va_start(args, n);
	s = 0;
	for (i = 0; i < n; i++)
		s += va_arg(args, int);
	va_end(args);
	return (s);
}

