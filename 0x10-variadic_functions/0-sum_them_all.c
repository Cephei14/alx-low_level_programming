#include "variadic_functions.h"

/**
 * sum_them_all - function that perform addition
 * @n: number of args
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list args;

	if (n == 0)
		return (0);
	s = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
		s += va_arg(args, int);
	va_end(args);
	return (s);
}
