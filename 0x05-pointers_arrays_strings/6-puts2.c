#include "main.h"

/**
 * puts2 - function that print first number ans skip the other one
 * @str: the numbers to be tested
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i <= 9; i += 2)
	{
		if (i != 10)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
