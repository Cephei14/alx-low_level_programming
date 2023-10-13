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
	sp = "";
	va_start(PA, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(PA, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(PA, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(PA, double));
					break;
				case 's':
				{
					c = va_arg(PA, char *);
					if (c == NULL)
						c = "(nil)";
					printf("%s%s", sp, c);
				}
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(PA);
}
