#include "main.h"

/**
 * argstostr - function that concat args
 * @ac: nummber of args
 * @av: value of args
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j, n = 0, len = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		len += j + 1;
		i++;
	}
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (NULL);
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			p[n] = av[i][j];
			n++;
			j++;
		}
		p[n] = '\n';
		n++;
		i++;
	}
	p[n] = '\0';
	return (p);
}

