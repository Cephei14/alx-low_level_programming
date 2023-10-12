#include "variadic_functions.h"

/**
 * print_strings - function that print a string
 * @separator: character that separate two strings
 * @n: number of args
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(string);
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%s%s", va_arg(string, char *), separator);
		}
	}
	va_end(string);
	printf("\n");
}
