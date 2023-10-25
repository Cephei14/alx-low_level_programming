#include "main.h"

/**
 * strtow - function that split a string into two
 * @str: pointer to the string
 * Return: pointer or NULL
 */

char **strtow(char *str)
{
	int i = 0, j = 0, m, n, wl, k;
	char **p;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			i++, j++;
			if (str[i] == ' ')
				k++;
		}
	}
	if (j == 0)
		return (NULL);
	p = malloc(j + k + 1);
	if (p == NULL)
		return (NULL);
	i = 0, n = 0;
	while (i < j)
	{
		while (str[i] == ' ')
			i++, j++;
		wl = 0;
		while (str[i + wl] != ' ' && str[i + wl] != '\0')
			wl++;
		p[n] = malloc(wl);
		if (p[n] == NULL)
			return (NULL);
		m = 0;
		while (m < wl)
			p[n][m] = str[i + m], m++;
		p[n][m] = '\0';
		n++, i += wl;
	}
	p[n] = NULL;
	return (p);
}
