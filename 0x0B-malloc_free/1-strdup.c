#include "main.h"

/**
 * _strdup - function that return the address to an allocated memory
 * @str: a tring
 * Return: a pointer
 */

char *_strdup(char *str)
{
	unsigned long int i, c;
	char *p;

	for (c = 0; str[c] <= '\0'; c++)
		c++;
	p = malloc(c);
	if (str == NULL || p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
}
