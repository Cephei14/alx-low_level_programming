#include "main.h"

/**
* print_alphabet - print lower case english alphabets
* Return: 0 when success
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}

