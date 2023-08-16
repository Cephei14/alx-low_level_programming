#include "main.h"

/**
 *print_alphabet_x10 - function that print alphabet ten times
 * Return: 0 if succeeded
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
