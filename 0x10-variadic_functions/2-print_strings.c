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
	char *p;

	va_start(string, n);
	i = 0;
	while (i < n)
	{
		p = va_arg(string, char *);
		if (p == NULL)
			p = "(nil)";
		if (separator != NULL && i != n - 1)
		{
			printf("%s%s", p, separator);
		}
		else
		{
			printf("%s", p);
		}
		i++;
	}
	va_end(string);
	printf("\n");
}
