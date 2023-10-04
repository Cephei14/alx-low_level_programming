#include "main.h"

/**
 * _strdup - function that return the address to an allocated memory
 * @str: a tring
 * Return: a pointer
 */

char *_strdup(char *str)
{
	int i, c;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	p = malloc(sizeof(char) * (c + 1));
	if (p == NULL)
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
