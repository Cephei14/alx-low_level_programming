#include "variadic_functions.h"

/**
 * sum_them_all - function that perform addition
 * @n: number of args
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list s;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(s, n);
	for (i = 0; i < n; i++)
		sum += va_arg(s, int);
	va_end(s);
	return (sum);
}
