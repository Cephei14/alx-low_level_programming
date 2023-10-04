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
	for (c = 0; *(str + c) <= '\0'; c++)
	{
		c++;
	}
	p = malloc(sizeof(char) * 2 * c);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; *(str + i) != '\0'; i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
}
