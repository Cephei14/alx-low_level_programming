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
		if (separator == NULL || i == n - 1)
		{
			if (va_arg(string, char *) == NULL)
				printf("(nil)");
			else
				printf("%s", va_arg(string, char *));
		}
		else
		{
			if (va_arg(string, char *) == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", va_arg(string, char *), separator);
		}
	}
	printf("\n");
}
