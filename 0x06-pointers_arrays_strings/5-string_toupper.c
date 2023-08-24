#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function that convert to upper case
 *@c: character to be converted
 * Return: 0
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		c[i] = toupper(c[i]);
	}
	return (c);
}
