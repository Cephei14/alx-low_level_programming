#include "main.h"

/**
 * puts_half - it prints half of a string, followed by \n
 * @str: parameter to be tested
 * Return: 0
 */

void puts_half(char *str)
{
	int x;
	int y;
	int c;

	c = 0;
	for (x = 0; str[x] != '\0'; x++)
	{
		c++;
	}
	y = (c - 1) / 2;
	for (x = y + 1; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
