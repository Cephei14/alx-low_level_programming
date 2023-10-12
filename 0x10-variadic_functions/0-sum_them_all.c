#include "variadic_functions.h"

/**
 * sum_them_all - function that perform addition
 * @n: number of args
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s;
	va_list sum;

	if (n == 0)
		return (0);
	va_start(sum, n);
	s = 0;
	for (i = 0; i < n; i++)
		s += va_arg(sum, int);
	va_end(sum);
	return (s);
}
