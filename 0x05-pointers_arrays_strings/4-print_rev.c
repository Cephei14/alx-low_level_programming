#include "main.h"

/**
 * print_rev - function that print string in reverse
 * @s: the string
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
