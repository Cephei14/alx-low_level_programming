#include "variadic_functions.h"

/**
 * print_numbers - function that prnt numbers
 * @separator: string to be printed
 * @n: number of int
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(nums);
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%d", va_arg(nums, int));
		else if (i < n - 1)
			printf("%d%s", va_arg(nums, int), separator);
	}
	printf("\n");
	va_end(sum);
}
