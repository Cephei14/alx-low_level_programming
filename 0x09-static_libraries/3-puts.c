#include "main.h"

/**
 * _puts - function that print a string followed by new line
 *@str:the tring printed
 *Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
