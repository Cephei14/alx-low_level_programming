#include "main.h"

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
		if (c[i] <= 122 && c[i] >= 97)
		{
		c[i] = c[i] - 32;
		}
	}
	return (c);
}
