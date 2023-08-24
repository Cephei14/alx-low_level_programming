#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function that convert to upper case
 *
 *@str: character to be converted
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
