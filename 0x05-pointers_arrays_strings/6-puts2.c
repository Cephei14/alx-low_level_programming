#include "main.h"

/**
 * puts2 - function that print first number ans skip the other one
 * @str: the numbers to be tested
 * Return: 0
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 == 0)
		{
		_putchar(str[n]);
		}
	}
	_putchar('\n');
}
