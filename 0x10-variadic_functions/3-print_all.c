#include "variadic_functions.h"

/**
 * print_all - funtion that print anything
 * @format: list of args types
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list PA;

	va_start(PA, format);
	printf("%c ,", va_arg(PA, int));
	printf("%d ,", va_arg(PA, int));
	printf("%s\n", va_arg(PA, char *));
	va_end(PA);
}
