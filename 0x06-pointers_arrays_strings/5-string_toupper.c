#include "main.h"

/**
 * string_toupper - function that convert to upper case
 *@str: character to be converted
 * Return: 0
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
		str[i] = str[i] - 32;
		}
	}
	return (str);
}
