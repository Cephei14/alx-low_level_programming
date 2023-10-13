#include "variadic_functions.h"

/**
 * print_all - funtion that print anything
 * @format: list of args types
 * @...: other agrs
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list PA;
	int i;
	char *c, *sp;

	i = 0;
	sp = ", ";
	va_start(PA, format);
	while (format[i])
	{
		if (!format[i + 1])
			sp = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(PA, int), sp);
				break;
			case 'i':
				printf("%d%s", va_arg(PA, int), sp);
				break;
			case 'f':
				printf("%f%s", va_arg(PA, double), sp);
				break;
			case 's':
			{
				c = va_arg(PA, char *);
				if (!c)
					c = "(nil)";
				printf("%s%s", c, sp);
			}
				break;
		}
		i++;
	}
	printf("\n");
	va_end(PA);
}
