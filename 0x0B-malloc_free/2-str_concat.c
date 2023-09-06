#include "main.h"

/**
 *str_concat - a function that cat 2 strings
 *@s1:string 1 concatenates
 *@s2:string 2 concatenates
 *Return:s1 and s2's  concatenates
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	j = 0;
	i = j;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	c = malloc(sizeof(char) * (i + j + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	j = 0;
	i = j;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		c[i] = s2[j];
		i++;
		j++;
	}
	c[i] = '\0';
	return (c);
}
